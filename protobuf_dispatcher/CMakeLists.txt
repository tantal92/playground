include(FindProtobuf)
include(CMakePrintHelpers)
find_package(Protobuf REQUIRED)
find_package(PkgConfig REQUIRED)
pkg_check_modules(ZMQ REQUIRED IMPORTED_TARGET libzmq)
set(CMAKE_THREAD_PREFER_PTHREAD TRUE)
set(THREADS_PREFER_PTHREAD_FLAG TRUE)
find_package(Threads REQUIRED)


# client bin
add_executable(dispatcher)
target_include_directories(dispatcher PRIVATE ${PROTOBUF_INCLUDE_DIR} ${CMAKE_SOURCE_DIR}/utils)
target_sources(dispatcher PRIVATE server.cpp message.pb.cc ${CMAKE_SOURCE_DIR}/utils/zmqHelpers.cpp)
target_link_libraries(dispatcher
        ${PROTOBUF_LIBRARY}
        PkgConfig::ZMQ
        Threads::Threads
        )
