#include "../Character.h"
#include "gtest/gtest.h"

TEST(Char, testGetID){
    Character user(1, "x", 10, 20, 30, 40, "Normal");
    EXPECT_EQ (user.getID(), 1);
}

TEST(Char, testGetName){
    Character user(1, "x", 10, 20, 30, 40, "Normal");
    EXPECT_EQ (user.getName(), "x");
}

TEST(Char, testGetHealth){
    Character user(1, "x", 10, 20, 30, 40, "Normal");
    EXPECT_EQ (user.getHealth(), 10);
}

TEST(Char, testGetAttack){
    Character user(1, "x", 10, 20, 30, 40, "Normal");
    EXPECT_EQ (user.getAttack(), 20);
}

TEST(Char, testGetDefense){
    Character user(1, "x", 10, 20, 30, 40, "Normal");
    EXPECT_EQ (user.getDefense(), 30);
}

TEST(Char, testGetStatus){
    Character user(1, "x", 10, 20, 30, 40, "Normal");
    EXPECT_EQ (user.getStatus(), "Normal");
}

TEST(Char, testSetHealth){
    Character user(1, "x", 10, 20, 30, 40, "Normal");
    user.setHealth(100);
    EXPECT_EQ (user.getHealth(), 100);
}

TEST(Char, testSetAttack){
    Character user(1, "x", 10, 20, 30, 40, "Normal");
    user.setAttack(30);
    EXPECT_EQ (user.getAttack(), 30);
}

TEST(Char, testSetDefense){
    Character user(1, "x", 10, 20, 30, 40, "Normal");
    user.setDefense(67);
    EXPECT_EQ (user.getDefense(), 67);
}

TEST(Char, testSetStatus){
    Character user(1, "x", 10, 20, 30, 40, "Freezing");
    user.setStatus("Normal");
    EXPECT_EQ (user.getStatus(), "Normal");
}

TEST(Char, testIsAlive){
    Character user(1, "x", 10, 20, 30, 40, "Freezing");
    EXPECT_EQ (user.isAlive(), true);
}

TEST(Char, testIsAlive2){
    Character user(1, "x", 0, 20, 30, 40, "Freezing");
    EXPECT_EQ (user.isAlive(), false);
}

