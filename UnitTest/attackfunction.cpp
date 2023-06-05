#include "../attackfunction.h"
#include "gtest/gtest.h"
#include "../Character.h"


TEST(AttackFunctionTest, ZeroCounter) {
    Character char1(1, "char1", 100, 50, 80, 100, "Normal");
    Character char2(2, "char2", 100, 50, 20, 100, "Normal");

    AttackFunction attackOppnent;
    attackOppnent.attackFunction(char1, char2, 0);
    EXPECT_EQ(char2.getHealth(), 59);
}

//test2
TEST(AttackFunctionTest, NotZeroCoubter) {
    Character char1(1, "char1", 100, 40, 80, 100, "Normal");
    Character char2(2, "char2", 100, 50, 30, 100, "Normal");
    
    AttackFunction attackOppnent;
    attackOppnent.attackFunction(char1, char2, 1);
    EXPECT_EQ(char2.getHealth(), 82);
}