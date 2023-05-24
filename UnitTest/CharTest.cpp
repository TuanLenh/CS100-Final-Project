#include "../Character.h"
#include "gtest/gtest.h"

TEST(Char, testGetID){
    Character user(1, "x", 10, 20, 30, 40, "Normal");
    EXPECT_EQ (user.getID(), 1);
}