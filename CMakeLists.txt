CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(testReturnStatClass
    UnitTest/ReturnStatTest.cpp
    Character.cpp
    ReturnStat.cpp
)

TARGET_LINK_LIBRARIES(testReturnStatClass gtest gtest_main)
TARGET_COMPILE_DEFINITIONS(testReturnStatClass PRIVATE gtest_disable_pthreads=ON)