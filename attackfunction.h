#ifndef ATTACK_FUNCTION_H
#define ATTACK_FUNCTION_H

#include "Character.h"

using namespace std;

class AttackFunction{
    public:
        void attackFunction(Character& char1, Character& char2, int counter);
        void bossHeavyAttack(Character& char1, Character& char2, int counter);
};

#endif