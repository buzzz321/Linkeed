cmake_minimum_required(VERSION 2.8)
project(linkeed_test)

set(COMMON_INCLUDES ${PROJECT_SOURCE_DIR}/src)
ADD_DEFINITIONS("-std=c++0x -g3") 

add_subdirectory (src)
################################
# GTest
################################
ADD_SUBDIRECTORY (gtest-1.6.0)
enable_testing()

include_directories(${gtest_SOURCE_DIR}/include
  ${gtest_SOURCE_DIR}
  ${COMMON_INCLUDES})

################################
# Unit Tests
################################
set( CTEST_OUTPUT_ON_FAILURE )

add_executable( runUnitTests test.cc )
# Link test executable against gtest & gtest_main
target_link_libraries(runUnitTests gtest gtest_main pthread IntList)
add_test( runUnitTests runUnitTests )
