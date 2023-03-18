cmake_minimum_required(VERSION 3.20...3.25.2)

project(pntr-hello LANGUAGES CXX)

# If 'pntr' is installed, use 'find_package'
find_package(pntr REQUIRED)

add_executable(pntr-hello pntr-hello.cpp)

# And link to the target 'pntr'
target_link_libraries(pntr-hello pntr)
