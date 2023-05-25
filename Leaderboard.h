#ifndef LEADERBOARD_H
#define LEADERBOARD_H

#include <iostream>
#include <vector>

using namespace std;

struct Player
{
    string playerName;
    int playerScore;
    
};

class Leaderboard
{
public:
    void addToLeaderBoard(vector<Player>& boardVect, Player& p1);
    void sortLeaderBoard(vector<Player>& boardVect);
    void printTopFive(vector<Player> boardVect);
};

#endif