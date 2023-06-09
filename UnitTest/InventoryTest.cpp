#include <gtest/gtest.h>
#include "../Character.h"
#include "../Inventory.h"

TEST(CharacterPotionTests, UseHealthPotion) {
    Inventory potion;
    Character char1(1, "Char1", 100, 100, 100, 75, "Normal");
    potion.useHealthPotion(char1);
    EXPECT_EQ(char1.getHealth(), 150);
}

TEST(CharacterPotionTests, UseHealthPotionLessHealth) {
    Inventory potion;
    Character char2(2, "Char2", 30, 70, 20, 75, "Normal");
    potion.useHealthPotion(char2);
    EXPECT_EQ(char2.getHealth(), 80);
}

TEST(CharacterPotionTests, UseAttackPotion) {
    Inventory potion;
    Character char1(1, "Char1", 100, 100, 100, 75, "Normal");
    potion.useAttackPotion(char1);
    EXPECT_EQ(char1.getAttack(), 130);
}

TEST(CharacterPotionTests, UseAttackPotionLowerAttack) {
    Inventory potion;
    Character char2(2, "Char2", 40, 70, 10, 60, "Sleeping");
    potion.useAttackPotion(char2);
    EXPECT_EQ(char2.getAttack(), 91);
}

TEST(CharacterPotionTests, UseDefensePotion) {
    Inventory potion;
    Character char1(1, "Char1", 100, 100, 100, 75, "Normal");
    potion.useDefensePotion(char1);
    EXPECT_EQ(char1.getDefense(), 130);
}

TEST(CharacterPotionTests, UseDefensePotionLowerDefense) {
    Inventory potion;
    Character char2(2, "Char1", 65, 75, 10, 75, "Normal");
    potion.useDefensePotion(char2);
    EXPECT_EQ(char2.getDefense(), 13);
}