#include <iostream>
#include "Character.h"
#include "inventory.h"

using namespace std;

void useHealthPotion(Character &char1){
    char1.setHealth(char1.getHealth() + 50);
}

void useAttackPotion(Character &char1){
    char1.setAttack(char1.getAttack() + char1.getAttack() * 0.3);
}

void useDefensePotion(Character &char1){
    char1.setDefense(char1.getDefense() + char1.getDefense() * 0.3)
}    