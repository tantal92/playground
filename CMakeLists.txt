cmake_minimum_required(VERSION 3.13)
project(protoTut)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(req-rep)
add_subdirectory(pub-sub/weather)
add_subdirectory(pipeline/divide-and-conquer)
#add_subdirectory(apps)
add_subdirectory(protobuf_dispatcher)