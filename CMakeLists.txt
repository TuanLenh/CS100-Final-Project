CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(testattackfunctionClass
    UnitTest/attackfunction.cpp
    attackfunction.cpp
)

TARGET_LINK_LIBRARIES(testattackFunctionClass gtest gtest_main)
TARGET_COMPILE_DEFINITIONS(testattackFunctionClass PRIVATE gtest_disable_pthreads=ON)