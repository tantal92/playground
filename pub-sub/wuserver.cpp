//
//  Weather update server in C++
//  Binds PUB socket to tcp://*:5556
//  Publishes random weather updates
//
//  Olivier Chamoux <olivier.chamoux@fr.thalesgroup.com>
//
#include "weather.pb.h"
#include "wuclient.h"
#include "zmqHelpers.h"
#include <stdio.h>
#include <stdlib.h>
#include <thread>
#include <time.h>
#include <zmq.hpp>

#if (defined(WIN32))
#include <zhelpers.hpp>
#endif

#define within(num) (int)((float)num * random() / (RAND_MAX + 1.0))

int main()
{
    //  Prepare our context and publisher
    zmq::context_t context(1);
    zmq::socket_t  publisher(context, ZMQ_PUB);
    zhelpers::bindToRandomPort(publisher);
    std::string portInUse = zhelpers::getSocketPort(publisher);
    std::cout << "Starting server on port: " << portInUse << std::endl;
    std::thread(wuclient, "1", portInUse).detach();

    //    publisher.bind("ipc://weather.ipc");				// Not usable on Windows.

    //  Initialize random number generator
    srandom((unsigned)time(NULL));
    while (1) {
        weather::weather wthr{};

        //  Get values that will fool the boss
        wthr.set_zipcode(within(100000));
        wthr.set_temperature(within(215) - 80);
        wthr.set_relhumidity(within(50) + 10);


        //  Send message to all subscribers
        std::string    str;
        wthr.SerializeToString(&str);
        str.insert(0, std::to_string(wthr.zipcode())+ " ");
        int msgSize = str.length();
        zmq::message_t msg(msgSize);
        memcpy(msg.data(), str.c_str(), msgSize);
        publisher.send(msg);
    }
    return 0;
}
