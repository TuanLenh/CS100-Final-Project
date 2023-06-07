CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
ADD_SUBDIRECTORY(googletest)


ADD_EXECUTABLE(testAttackFunctionClass
    UnitTest/attackfunction.cpp
    attackfunction.cpp
    Character.cpp
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

ADD_EXECUTABLE(testUltimateClass
    UnitTest/UltimateSkillTest.cpp
    Ultimate.cpp
    Character.cpp 
)

ADD_EXECUTABLE(testInventoryClass
    UnitTest/inventorytest.cpp
    inventory.cpp
    Character.cpp 
)


ADD_EXECUTABLE(runGame
    main.cpp
    Character.cpp
    ReturnStat.cpp
    ScreenLayout.cpp
    Ultimate.cpp
    Leaderboard.cpp
    attackfunction.cpp
    inventory.cpp
)

TARGET_LINK_LIBRARIES(testReturnStatClass gtest gtest_main)
TARGET_COMPILE_DEFINITIONS(testReturnStatClass PRIVATE gtest_disable_pthreads=ON)

TARGET_LINK_LIBRARIES(testCharacterClass gtest gtest_main)
TARGET_COMPILE_DEFINITIONS(testCharacterClass PRIVATE gtest_disable_pthreads=ON)

TARGET_LINK_LIBRARIES(testLeaderboardClass gtest gtest_main)
TARGET_COMPILE_DEFINITIONS(testLeaderboardClass PRIVATE gtest_disable_pthreads=ON)

TARGET_LINK_LIBRARIES(testAttackFunctionClass gtest gtest_main)
TARGET_COMPILE_DEFINITIONS(testAttackFunctionClass PRIVATE gtest_disable_pthreads=ON)

TARGET_LINK_LIBRARIES(testUltimateClass gtest gtest_main)
TARGET_COMPILE_DEFINITIONS(testUltimateClass PRIVATE gtest_disable_pthreads=ON)

TARGET_LINK_LIBRARIES(testInventoryClass gtest gtest_main)
TARGET_COMPILE_DEFINITIONS(testInventoryClass PRIVATE gtest_disable_pthreads=ON)