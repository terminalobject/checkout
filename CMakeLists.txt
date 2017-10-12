cmake_minimum_required(VERSION 3.0)

set(EXTRA_BINCFLAGS "-Wall -Wextra")
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} ${EXTRA_BINCFLAGS})

project (checkout)
add_subdirectory(/Users/noesis/Projects/checkout/test/googletest)
add_subdirectory(/Users/noesis/Projects/checkout/test/unit_tests)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(sources /Users/noesis/Projects/gtest-minimal-example/src/)
set(sources ${sources}/checkout.h ${checkout}/checkout.cpp)
set(test_sources /Users/noesis/Projects/checkout/test/unit_tests/checkout_tests.cpp)
add_executable(checkout_tests ${test_sources})
#add_executable(checkout ${sources})
target_link_libraries(checkout_tests gtest_main)

