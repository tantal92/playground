include(FindProtobuf)
include(CMakePrintHelpers)
find_package(Protobuf REQUIRED)
find_package(PkgConfig REQUIRED)
pkg_check_modules(ZMQ REQUIRED IMPORTED_TARGET libzmq)
set(CMAKE_THREAD_PREFER_PTHREAD TRUE)
set(THREADS_PREFER_PTHREAD_FLAG TRUE)
find_package(Threads REQUIRED)


# client bin
add_executable(wuserver)
target_include_directories(wuserver PRIVATE ${PROTOBUF_INCLUDE_DIR} ${CMAKE_SOURCE_DIR})
target_sources(wuserver PRIVATE wuserver.cpp weather.pb.cc)
target_link_libraries(wuserver
        ${PROTOBUF_LIBRARY}
        PkgConfig::ZMQ
        Threads::Threads
        )