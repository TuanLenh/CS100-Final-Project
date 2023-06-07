#include <gtest/gtest.h>
#include "Character.h"
#include "inventory.h"

TEST(CharacterPotionTests, UseHealthPotion) {
    Character char1;
    char1.setHealth(100);
    useHealthPotion(char1);
    EXPECT_EQ(char1.getHealth(), 150);
}

TEST(CharacterPotionTests, UseAttackPotion) {
    Character char1;
    char1.setAttack(100);

    useAttackPotion(char1);
    EXPECT_EQ(char1.getAttack(), 130);
}

TEST(CharacterPotionTests, UseDefensePotion) {
    Character char1;
    char1.setDefense(100);
    useDefensePotion(char1);
    EXPECT_EQ(char1.getDefense(), 130);
}
