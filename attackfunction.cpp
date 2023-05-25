#include "attackfunction.h"
#include "Character.h"
#include <iostream>

using namespace std;

void AttackFunction::attackFunction(Character& char1, Character& char2, int counter){
    if(counter == 0){
        int damage = char1.getAttack() * (100.0 / (100.0 + char2.getDefense()));
        char2.setHealth(char2.getHealth() - damage);
    }
    else{
        int damage = char1.getAttack() * (100.0 / (100.0 + (char2.getDefense()) * 2));
        char2.setHealth(char2.getHealth() - damage);
    }
}