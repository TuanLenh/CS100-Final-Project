#ifndef SCREENLAYOUT_H
#define SCREENLAYOUT_H

#include <iostream>
#include "Character.h"

using namespace std;

class ScreenLayout
{
    public:
        void mainMenu();
        void singlePlayerName();
        void multiFirstPlayerName();
        void multiSecondPlayerName();
        void characterSelection();
        void battleAction();
        void singlePlayerVictory(int thisGameScore, int totalScore);
        void singlePlayerVictoryLastBattle(int thisGameScore, int totalScore);
        void singlePlayerDefeat(int totalScore);
        void player(const string & input);
        void multiVictory(const string & );
        void MultibattleAction();
        void inventoryMenu();
        void UltimateSkillsOutputSingle(Character & user);
        void UltimateSkillsOutputMulti(Character & user1, Character & user2);
        void UltimateSkillMessage(const Character & , const Character & );
        void HealthPotionMsg(const Character &);
        void AttackPotionMsg(const Character &);
        void DefensePotionMsg(const Character &);
};

#endif