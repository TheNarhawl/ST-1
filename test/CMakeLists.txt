include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.11.0
)
FetchContent_MakeAvailable(googletest)

include_directories(${gtest_SOURCE_DIR}/include)
include_directories(${${PROJECT_NAME}_SOURCE_DIR}/include)
set(header ${${PROJECT_NAME}_SOURCE_DIR}/include)

add_executable(${PROJECT_NAME}.test
  AllTests.cpp
  tests.cpp)

target_link_libraries(${PROJECT_NAME}.test
    ${PROJECT_NAME}
    GTest::gtest
    GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME}.test)