cmake_minimum_required(VERSION 3.5)
project(luq-server)

set(CMAKE_CXX_STANDARD 23)

find_package(Threads REQUIRED)

add_executable(luq-server src/main.cpp)

target_include_directories(luq-server PRIVATE /usr/local/include)
target_link_libraries(luq-server PRIVATE pthread)
