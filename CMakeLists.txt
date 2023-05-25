CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(testLeaderboardClass
    UnitTest/leaderboardTest.cpp
    Leaderboard.cpp
)

TARGET_LINK_LIBRARIES(testLeaderboardClass gtest gtest_main)
TARGET_COMPILE_DEFINITIONS(testLeaderboardClass PRIVATE gtest_disable_pthreads=ON)