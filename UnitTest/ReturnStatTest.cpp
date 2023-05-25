#include "../ReturnStat.h"
#include "gtest/gtest.h"

TEST(ReturnStatFunc, testHealth){
    Character Mario(1, "Mario", 0, 0, 0, 0, "Normal");
    Character Dummy(2, "Dummy", 0, 0, 0, 0, "Normal");
    ReturnStat resetFunction;
    resetFunction.returnToOriginal(Mario, Dummy);
    EXPECT_EQ (Mario.getHealth(), 100);
}

TEST(ReturnStatFunc, testAttack){
    Character Mario(1, "Mario", 0, 0, 0, 0, "Normal");
    Character Dummy(2, "Dummy", 0, 0, 0, 0, "Normal");
    ReturnStat resetFunction;
    resetFunction.returnToOriginal(Mario, Dummy);
    EXPECT_EQ (Mario.getAttack(), 20);
}

TEST(ReturnStatFunc, testDefense){
    Character Mario(1, "Mario", 0, 0, 0, 0, "Normal");
    Character Dummy(2, "Dummy", 0, 0, 0, 0, "Normal");
    ReturnStat resetFunction;
    resetFunction.returnToOriginal(Mario, Dummy);
    EXPECT_EQ (Mario.getDefense(), 16);
}

TEST(ReturnStatFunc, testStatus){
    Character Mario(1, "Mario", 0, 0, 0, 0, "Frozen");
    Character Dummy(2, "Dummy", 0, 0, 0, 0, "Normal");
    ReturnStat resetFunction;
    resetFunction.returnToOriginal(Mario, Dummy);
    EXPECT_EQ (Mario.getStatus(), "Normal");
}


