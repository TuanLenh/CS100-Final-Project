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
    Character char1;
    int initialHealth = char1.getHealth();

    useHealthPotion(char1);
    int updatedHealth = char1.getHealth();
    EXPECT_EQ(updatedHealth, initialHealth + 50);
}
//test 4

TEST(CharacterTests, UseAttackPotionby30) {
    Character char1;
    double initialAttack = char1.getAttack();
    useAttackPotion(char1);
    double updatedAttack = char1.getAttack();

    double expectedAttack = initialAttack + initialAttack * 0.3;
    EXPECT_DOUBLE_EQ(updatedAttack, expectedAttack);
}

//test 5
TEST(CharacterTests, UseDefensePotionby30){
    Character char 1;
    double firstDefense = char1.getDefense();
    useDefensePotion(char1);
    double updatedDefense = char1.getDefense();

    double expectedDefense = firstDefense + firstDefense * 0.3;
    EXPECT_DOUBLE_EQ(updatedDefense, expectedDefense);
}