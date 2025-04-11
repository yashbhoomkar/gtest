
cmake_minimum_required (VERSION 3.0.0)
project (main CXX)

SET(CMAKE_EXPORT_COMPILE_COMMANDS 1)
SET(CMAKE_CXX_COMPILER "clang++")
SET(CMAKE_CXX_STANDARD_INCLUDE_DIRECTORIES ${CMAKE_CXX_IMPLICIT_INCLUDE_DIRECTORIES})
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0")
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")

# Enable testing
enable_testing()
find_package(GTest REQUIRED)

include_directories(include)
file(GLOB SRC src/*.cpp)
file(GLOB TEST_SRC test/*.cpp)

# Main executable
add_executable(main ${SRC})

# Test executable
add_executable(runTests ${TEST_SRC})
target_link_libraries(runTests GTest::GTest GTest::Main)

add_test(NAME unit_tests COMMAND runTests)

add_custom_target(
	copy-compile-commands ALL
	${CMAKE_COMMAND} -E copy_if_different
	${CMAKE_BINARY_DIR}/compile_commands.json
	${CMAKE_CURRENT_LIST_DIR}
)
