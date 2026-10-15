cmake_minimum_required(VERSION 3.20)
project(auth_service LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(utils STATIC
    ${CMAKE_CURRENT_SOURCE_DIR}/../utils/utils.cpp
)
target_include_directories(utils PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/../utils
)

add_executable(db_test main.cpp)
target_link_libraries(db_test PRIVATE utils)