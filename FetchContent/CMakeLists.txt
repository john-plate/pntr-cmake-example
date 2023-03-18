cmake_minimum_required(VERSION 3.24...3.25.2)

project(pntr-hello LANGUAGES CXX)

# Use 'find_package' first, otherwise fetch from github.
include(FetchContent)
FetchContent_Declare(pntr
  GIT_REPOSITORY     https://github.com/john-plate/pntr.git
  GIT_TAG            main
  GIT_SHALLOW        TRUE
  FIND_PACKAGE_ARGS)
FetchContent_MakeAvailable(pntr)

add_executable(pntr-hello pntr-hello.cpp)

# And link to the target 'pntr'
target_link_libraries(pntr-hello pntr)
