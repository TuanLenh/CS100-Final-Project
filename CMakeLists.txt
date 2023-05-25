CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
ADD_SUBDIRECTORY(googletest)


ADD_EXECUTABLE(testattackfunctionClass
    UnitTest/attackfunction.cpp
    attackfunction.cpp
)

ADD_EXECUTABLE(testLeaderboardClass
    UnitTest/leaderboardTest.cpp
    Leaderboard.cpp
)

ADD_EXECUTABLE(testReturnStatClass
    UnitTest/ReturnStatTest.cpp
    Character.cpp
    ReturnStat.cpp
)

ADD_EXECUTABLE(testCharacterClass
    UnitTest/CharTest.cpp
    Character.cpp
)

TARGET_LINK_LIBRARIES(testReturnStatClass gtest gtest_main)
TARGET_COMPILE_DEFINITIONS(testReturnStatClass PRIVATE gtest_disable_pthreads=ON)

TARGET_LINK_LIBRARIES(testCharacterClass gtest gtest_main)
TARGET_COMPILE_DEFINITIONS(testCharacterClass PRIVATE gtest_disable_pthreads=ON)

TARGET_LINK_LIBRARIES(testLeaderboardClass gtest gtest_main)
TARGET_COMPILE_DEFINITIONS(testLeaderboardClass PRIVATE gtest_disable_pthreads=ON)

TARGET_LINK_LIBRARIES(testattackFunctionClass gtest gtest_main)
TARGET_COMPILE_DEFINITIONS(testattackFunctionClass PRIVATE gtest_disable_pthreads=ON)
