include(FindProtobuf)
include(CMakePrintHelpers)
find_package(Protobuf REQUIRED)
find_package(PkgConfig REQUIRED)
pkg_check_modules(ZMQ REQUIRED IMPORTED_TARGET libzmq)
set(CMAKE_THREAD_PREFER_PTHREAD TRUE)
set(THREADS_PREFER_PTHREAD_FLAG TRUE)
find_package(Threads REQUIRED)


# divide-and-conquer bin
add_executable(divide-and-conquer)
target_include_directories(divide-and-conquer PRIVATE ${PROTOBUF_INCLUDE_DIR} ${CMAKE_SOURCE_DIR})
target_sources(divide-and-conquer PRIVATE TaskDistributor.cpp main.cpp readyIndicator.pb.cc ${CMAKE_SOURCE_DIR}/utils/zmqHelpers.cpp)
target_link_libraries(divide-and-conquer
        ${PROTOBUF_LIBRARY}
        PkgConfig::ZMQ
        Threads::Threads
        )