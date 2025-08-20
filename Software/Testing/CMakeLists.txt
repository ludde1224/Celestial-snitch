enable_testing()

# Download and link GoogleTest
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(runUnitTests test_main.cpp)
target_link_libraries(runUnitTests gtest_main)
target_include_directories(runUnitTests PRIVATE ../include)

add_test(NAME runUnitTests COMMAND runUnitTests)
