cmake_minimum_required(VERSION 3.20)

project(my_drogon)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Drogon CONFIG REQUIRED)

add_executable(my_drogon src/main.cpp)

target_link_libraries(my_drogon PRIVATE Drogon::Drogon)