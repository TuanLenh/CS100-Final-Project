CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(testCharacterClass
    UnitTest/CharTest.cpp
    Character.cpp
)

TARGET_LINK_LIBRARIES(testCharacterClass gtest gtest_main)
TARGET_COMPILE_DEFINITIONS(testCharacterClass PRIVATE gtest_disable_pthreads=ON)