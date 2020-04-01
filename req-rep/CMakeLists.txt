include(FindProtobuf)
include(CMakePrintHelpers)
find_package(Protobuf REQUIRED)
find_package(PkgConfig REQUIRED)
pkg_check_modules(ZMQ REQUIRED IMPORTED_TARGET libzmq)
set(CMAKE_THREAD_PREFER_PTHREAD TRUE)
set(THREADS_PREFER_PTHREAD_FLAG TRUE)
find_package(Threads REQUIRED)


# client bin
add_executable(server)
target_include_directories(server PRIVATE ${PROTOBUF_INCLUDE_DIR})
target_sources(server PRIVATE server.cpp textMessage.pb.cc)
target_link_libraries(server
        ${PROTOBUF_LIBRARY}
        PkgConfig::ZMQ
        Threads::Threads
        )
