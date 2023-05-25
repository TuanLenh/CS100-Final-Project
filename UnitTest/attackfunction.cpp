#include "../attackfunction.h"
#include "gtest/gtest.h"
#include "Character.h"


TEST(AttackFunctionTest, ZeroCounter) {
    Character char1;
    Character char2;
    char1.setAttack(50);
    char2.setDefense(20);
    char2.setHealth(100);
    GameEngine::attackFunction(char1, char2, 0);
    EXPECT_EQ(char2.getHealth(), 80);
}

//test2
TEST(AttackFunctionTest, NotZeroCoubter) {
    Character char1;
    Character char2;
    char1.setAttack(40);
    char2.setDefense(30);
    char2.setHealth(100);
    GameEngine::attackFunction(char1, char2, 1);
    EXPECT_EQ(char2.getHealth(), 70);
}