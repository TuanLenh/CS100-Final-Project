#include "../ReturnStat.h"
#include "gtest/gtest.h"

TEST(ReturnStatFunc, testHealth){
    Character Mario(1, "Mario", 0, 0, 0, 0, "Normal");
    Character Dummy(2, "Dummy", 0, 0, 0, 0, "Normal");
    // ReturnStat resetFunction(Mario, Dummy);
    EXPECT_EQ (Mario.getAttack(), 20);
}