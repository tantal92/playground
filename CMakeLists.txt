cmake_minimum_required(VERSION 3.13)
project(protoTut)

set(CMAKE_CXX_STANDARD 17)
include(FindProtobuf)
find_package(Protobuf REQUIRED)
find_package(PkgConfig REQUIRED)
pkg_check_modules(ZMQ REQUIRED IMPORTED_TARGET libzmq)
set(CMAKE_THREAD_PREFER_PTHREAD TRUE)
set(THREADS_PREFER_PTHREAD_FLAG TRUE)
find_package(Threads REQUIRED)


# client bin
add_executable(server)
target_sources(server PRIVATE server.cpp textMessage.pb.cc)
target_include_directories(server PRIVATE ${PROTOBUF_INCLUDE_DIR})
target_link_libraries(server
        ${PROTOBUF_LIBRARY}
        PkgConfig::ZMQ
        Threads::Threads
        )