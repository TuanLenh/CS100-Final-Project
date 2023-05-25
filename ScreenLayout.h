#ifndef SCREENLAYOUT_H
#define SCREENLAYOUT_H

#include <iostream>

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
        void multiPlayerBattleEnd();
};

#endif