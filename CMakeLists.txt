cmake_minimum_required(VERSION 3.14)
project(AlgorithmUtilsProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
set(gtest_force_download ON CACHE BOOL "")
set(GTEST_SAMPLES OFF CACHE BOOL "")
set(INSTALL_GTEST OFF CACHE BOOL "")

FetchContent_MakeAvailable(googletest)

add_library(AlgorithmUtils AlgorithmUtils.cpp AlgorithmUtils.h)

add_executable(runTests AlgorithmUtilsTest.cpp)

target_link_libraries(runTests
    PRIVATE
    AlgorithmUtils
    gtest_main
    gmock_main
)

include(GoogleTest)
gtest_discover_tests(runTests)