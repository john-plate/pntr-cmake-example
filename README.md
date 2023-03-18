# `pntr` - CMake Integration Examples

You can find here three different ways to integrate the [`pntr` header-only library](https://github.com/john-plate/pntr) into a CMake project.

## [`add_subdirectory`](add_subdirectory/)

You can simply add the subdirectory of the `pntr` repository.

## [`find_package`](find_package/)

You can use `find_package` if it can find the `pntr` installation or build directory in the `CMAKE_PREFIX_PATH` or in the default locations.

## [`FetchContent`](FetchContent/)

The recent `FetchContent` feature of CMake will pull `pntr` from github if `find_package` fails.
