//
//  Weather update server in C++
//  Binds PUB socket to tcp://*:5556
//  Publishes random weather updates
//
//  Olivier Chamoux <olivier.chamoux@fr.thalesgroup.com>
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <zmq.hpp>
#include <thread>
#include "wuclient.h"
#include "zmqHelpers.h"

#if (defined(WIN32))
#include <zhelpers.hpp>
#endif

#define within(num) (int)((float)num * random() / (RAND_MAX + 1.0))

int main()
{

    //  Prepare our context and publisher
    zmq::context_t context(1);
    zmq::socket_t  publisher(context, ZMQ_PUB);

    try {
        publisher.bind("tcp://*:*");
    } catch (zmq::error_t &e) {
        std::cerr << "couldn't bind to socket (client): " << e.what();
        std::terminate();
    }

    std::string portInUse = zhelpers::getSocketPort(publisher);
    std::cout << "Starting server on port: " << portInUse << std::endl;
    std::thread(wuclient, "1", portInUse).detach();

    //    publisher.bind("ipc://weather.ipc");				// Not usable on Windows.

    //  Initialize random number generator
    srandom((unsigned)time(NULL));
    while (1) {

        int zipcode, temperature, relhumidity;

        //  Get values that will fool the boss
        zipcode = within(100000);
        temperature = within(215) - 80;
        relhumidity = within(50) + 10;

        //  Send message to all subscribers
        zmq::message_t message(20);
        snprintf((char *)message.data(), 20, "%05d %d %d", zipcode, temperature, relhumidity);
        publisher.send(message);
    }
    return 0;
}
