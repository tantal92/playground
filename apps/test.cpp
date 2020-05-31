
#include "message.pb.h"
#include "ProtobufDispatcher.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <thread>

void callbackOne(pb::type_one* query)
{
    std::cout << "msg1: " << query->GetTypeName() << std::endl;
}

void callbackTwo(pb::type_two* query)
{
    std::cout << "msg2: " << query->GetTypeName() << std::endl;
}

using namespace std;

int main()
{
    ProtobufDispatcher dispatcher;
    dispatcher.registerMessageCallback<pb::type_one>(callbackOne);
    dispatcher.registerMessageCallback<pb::type_two>(callbackTwo);

    pb::MessageBase mb;
    pb::type_one t1;
    t1.set_msg("type one message");

    mb.set_messageid(1);
    mb.mutable_actualmessage()->PackFrom(t1);

    if(mb.actualmessage().Is<pb::type_one>())
    {
        std::cout << "received type one\n";
    } else{
        std::cout << "received sth different than type one\n";
    }

//    std::string fp = "serialized";
//
//    fstream output(fp, ios::out | ios::trunc | ios::binary);
//    if (!mb.SerializeToOstream(&output)) {
//        cerr << "Failed to write address book." << endl;
//        return -1;
//    }
//
//    pb::MessageBase receivedMessageBase;
//
//    fstream input(fp, ios::in | ios::binary);
//    if (!receivedMessageBase.ParseFromIstream(&input)) {
//        cerr << "Failed to parse address book." << endl;
//        return -1;
//    }
//
//    pb::type_one receivedActualMessage;




    google::protobuf::ShutdownProtobufLibrary();
    return 0;
}








//
//
//void f()
//{
//    std::vector<std::thread>threads;
//    for(unsigned i=0;i<20;++i)
//    {
//        threads.emplace_back(do_work,i);
//    }
//    for(auto&entry: threads)
//    entry.join();
//}