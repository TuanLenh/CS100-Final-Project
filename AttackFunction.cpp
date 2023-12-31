#include "AttackFunction.h"
#include "Character.h"
#include <iostream>

using namespace std;

void AttackFunction::attackFunction(Character& char1, Character& char2, int counter){
    if(counter == 0){
        int damage = char1.getAttack() * (100.0 / (100.0 + char2.getDefense()));
        char2.setHealth(char2.getHealth() - damage);
    }
    else{
        int damage = char1.getAttack() * (100.0 / (100.0 + (char2.getDefense()) * 4));
        char2.setHealth(char2.getHealth() - damage);
    }
}

void AttackFunction::bossHeavyAttack(Character& char1, Character& char2, int counter){
    if(counter == 0){
        int damage = (char1.getAttack() * 2) * (100.0 / (100.0 + char2.getDefense()));
        char2.setHealth(char2.getHealth() - damage);
    }
    else{
        int damage = (char1.getAttack() * 2) * (100.0 / (100.0 + (char2.getDefense()) * 4));
        char2.setHealth(char2.getHealth() - damage);
    }
}

void AttackFunction::lightAttack(Character& char1, Character& char2, int counter)
{
    if(counter == 0)
    {
        int damage = (char1.getAttack() * 2) * (100.0 / (100.0 + (char2.getDefense()) * 8));
        char2.setHealth(char2.getHealth() - damage);
    }
    else if(counter == 1)
    {
        int damage = (char1.getAttack() * 2) * (100.0 / (100.0 + (char2.getDefense()) * 12));
        char2.setHealth(char2.getHealth() - damage);
    }
    else if (counter == 2)
    {
        int damage = (char1.getAttack() * 2) * (100.0 / (100.0 + (char2.getDefense()) * 10));
        char2.setHealth(char2.getHealth() - damage);
    }
}
