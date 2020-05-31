//
// Created by sebastian on 10/04/2020.
//

#ifndef PROTOTUT_DISPATCHER_H
#define PROTOTUT_DISPATCHER_H

#include "message.pb.h"
#include <boost/noncopyable.hpp>
#include <functional>
#include <iostream>
#include <memory>

class Callback : boost::noncopyable
{
  public:
    virtual ~Callback(){};
    virtual void onMessage(google::protobuf::Any *message) const = 0;
};

template <typename T>
class CallbackT : public Callback
{
  public:
    typedef std::function<void(T *message)> ProtobufMessageCallback;

    CallbackT(const ProtobufMessageCallback &callback) : callback_(callback) {}

    virtual void onMessage(google::protobuf::Any *message) const
    {
        T t;
        message->UnpackTo(&t);
//        T *t = dynamic_cast<T *>(message);
//        assert(t != NULL);
        callback_(t);
    }

  private:
    ProtobufMessageCallback callback_;
};

void discardProtobufMessage(google::protobuf::Message *message)
{
    std::cout << "Discarding " << message->GetTypeName() << std::endl;
}

class ProtobufDispatcher
{
  public:
    ProtobufDispatcher() : defaultCallback_(discardProtobufMessage)
    {
        mapper.insert(std::pair(0, pb::type_one::descriptor()));
        mapper.insert(std::pair(1, pb::type_two::descriptor()));
    }

    void onMessage(google::protobuf::Message *message) const
    {
        auto *messageBase = dynamic_cast<pb::MessageBase *>(message);
        std::cout << "inside: " << messageBase->messageid() << std::endl;
        auto it = mapper.find(messageBase->messageid());
        if (it != mapper.end()) {
            auto itt = callbacks_.find(it->second);
            itt->second->onMessage(messageBase->mutable_actualmessage());
        } else {
            defaultCallback_(message);
        }
    }

    template <typename T>
    void registerMessageCallback(const typename CallbackT<T>::ProtobufMessageCallback &callback)
    {
        std::shared_ptr<CallbackT<T>> pd(new CallbackT<T>(callback));
        callbacks_[T::descriptor()] = pd;
    }

    typedef std::map<const google::protobuf::Descriptor *, std::shared_ptr<Callback>> CallbackMap;
    CallbackMap                                                                       callbacks_;
    std::function<void(google::protobuf::Message *message)> defaultCallback_;

    std::map<uint32_t, const google::protobuf::Descriptor *> mapper;
};

// dispatcher.registerMessageCallback<muduo::Query>(onQuery);

#endif // PROTOTUT_DISPATCHER_H
