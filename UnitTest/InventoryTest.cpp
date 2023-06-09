#include <gtest/gtest.h>
#include "../Character.h"
#include "../Inventory.h"

TEST(CharacterPotionTests, UseHealthPotion) {
    Inventory potion;
    Character char1(1, "Char1", 100, 100, 100, 75, "Normal");
    potion.useHealthPotion(char1);
    EXPECT_EQ(char1.getHealth(), 150);
}

TEST(CharacterPotionTests, UseAttackPotion) {
    Inventory potion;
    Character char1(1, "Char1", 100, 100, 100, 75, "Normal");
    potion.useAttackPotion(char1);
    EXPECT_EQ(char1.getAttack(), 130);
}

TEST(CharacterPotionTests, UseDefensePotion) {
    Inventory potion;
    Character char1(1, "Char1", 100, 100, 100, 75, "Normal");
    potion.useDefensePotion(char1);
    EXPECT_EQ(char1.getDefense(), 130);
}
