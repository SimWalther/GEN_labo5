include_directories("${PROJECT_SOURCE_DIR}")

# First Simple Google Test
add_executable(testProject test.cpp)
target_link_libraries(testProject gtest gmock_main)
add_test(testProject testProject)