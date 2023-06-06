#include <gtest/gtest.h>
#include "Character.h"
#include "inventory.h"
//test 1
TEST(CharacterTest, UseHealthPotion) {
    Character char1;
    char1.setHealth(100);

    useHealthPotion(char1);

    EXPECT_EQ(char1.getHealth(), 150);
}

//test 2
TEST(CharacterTest, UseAttackPotion) {
    Character char1;
    char1.setAttack(10);

    useAttackPotion(char1);

    EXPECT_EQ(char1.getAttack(), 13);
}
//test 3
TEST(CharacterTests, HealthPotionby50) {
    // Arrange
    Character char1;
    int initialHealth = char1.getHealth();

    // Act
    useHealthPotion(char1);
    int updatedHealth = char1.getHealth();

    // Assert
    EXPECT_EQ(updatedHealth, initialHealth + 50);
}
