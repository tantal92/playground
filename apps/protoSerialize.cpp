
#include "../req-rep/textMessage.pb.h"
#include <fstream>
#include <iostream>

int main() {

    textMessage::textMessage msg{};
    msg.set_id(6);
    msg.set_msg("message");
    std::fstream output("message.txt", std::ios::out | std::ios::trunc | std::ios::binary);
    if (!msg.SerializeToOstream(&output)) {
        std::cerr << "Failed to write address book." << std::endl;
        return -1;
    }
}