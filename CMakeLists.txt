cmake_minimum_required(VERSION 3.10)
project(workspace)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)
set(CMAKE_CXX_COMPILER "clang++")
set(CMAKE_CXX_STANDARD_INCLUDE_DIRECTORIES ${CMAKE_CXX_IMPLICIT_INCLUDE_DIRECTORIES})
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0")
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")

enable_testing()
find_package(GTest REQUIRED)

# Add the source files
set(SOURCES
    src/Example.cpp
    src/main.cpp #Adding main.cpp explicitly, assuming it's needed for the main executable
)

# Main executable
add_executable(main ${SOURCES})

# Test executable
add_executable(runTests test/sample_test.cpp ${SOURCES})
target_link_libraries(runTests GTest::GTest GTest::Main)

add_test(NAME unit_tests COMMAND runTests)

add_custom_target(
	copy-compile-commands ALL
	${CMAKE_COMMAND} -E copy_if_different
	${CMAKE_BINARY_DIR}/compile_commands.json
	${CMAKE_CURRENT_LIST_DIR}
)