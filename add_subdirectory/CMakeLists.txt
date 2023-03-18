cmake_minimum_required(VERSION 3.20...3.25.2)

project(pntr-hello LANGUAGES CXX)

# Just add the subdirectory of the 'pntr' repository
add_subdirectory(../../pntr pntr EXCLUDE_FROM_ALL)

add_executable(pntr-hello pntr-hello.cpp)

# And link to the target 'pntr'
target_link_libraries(pntr-hello pntr)
