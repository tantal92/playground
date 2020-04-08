include(FindProtobuf)
find_package(Protobuf REQUIRED)
find_package(PkgConfig REQUIRED)
pkg_check_modules(ZMQ REQUIRED IMPORTED_TARGET libzmq)
set(CMAKE_THREAD_PREFER_PTHREAD TRUE)
set(THREADS_PREFER_PTHREAD_FLAG TRUE)
find_package(Threads REQUIRED)


# protoSerialize bin
add_executable(test)
target_include_directories(test PRIVATE ${PROTOBUF_INCLUDE_DIR} ${CMAKE_SOURCE_DIR})
target_sources(test PRIVATE test.cpp)
target_link_libraries(test
        ${PROTOBUF_LIBRARY}
        PkgConfig::ZMQ
        Threads::Threads
        )
