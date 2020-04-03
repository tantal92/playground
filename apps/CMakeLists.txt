include(FindProtobuf)
find_package(Protobuf REQUIRED)
find_package(PkgConfig REQUIRED)
pkg_check_modules(ZMQ REQUIRED IMPORTED_TARGET libzmq)
set(CMAKE_THREAD_PREFER_PTHREAD TRUE)
set(THREADS_PREFER_PTHREAD_FLAG TRUE)
find_package(Threads REQUIRED)


# protoSerialize bin
add_executable(protoSerialize)
target_include_directories(protoSerialize PRIVATE ${PROTOBUF_INCLUDE_DIR} ${CMAKE_SOURCE_DIR})
target_sources(protoSerialize PRIVATE protoSerialize.cpp ../req-rep/textMessage.pb.cc)
target_link_libraries(protoSerialize
        ${PROTOBUF_LIBRARY}
        PkgConfig::ZMQ
        Threads::Threads
        )