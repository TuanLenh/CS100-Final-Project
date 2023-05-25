#include "Leaderboard.h"

void Leaderboard::addToLeaderBoard(vector<Player>& boardVect, Player& p1)
{
    // If the user name is already in the vector, update the score...
    int counter = 0;

    for (int I = 0; I < boardVect.size(); ++I)
    {
        if (p1.playerName == boardVect.at(I).playerName)
        {
            ++counter;

            if (p1.playerScore > boardVect.at(I).playerScore)
            {
                boardVect.at(I).playerScore = p1.playerScore;
            }
        }
    }

    // If the user name is not in the vector, add the user name/score to the vector...

    if (counter == 0)
    {
        boardVect.push_back(p1);
    }
}

// Algorithm for sorting the vector based on highest scores...

void Leaderboard::sortLeaderBoard(vector<Player>& boardVect)
{
    int I, J, maxIndex;

    for (I = 0; I < boardVect.size(); ++I)
    {
        maxIndex = I;
        
        for (J = I + 1; J < boardVect.size(); ++J)
        {
            if (boardVect.at(J).playerScore > boardVect.at(maxIndex).playerScore)
            {
                maxIndex = J;
            }
        }

        if (maxIndex != I)
        {
            swap(boardVect.at(maxIndex), boardVect.at(I));
        }
    }
}

// Prints out the user names/scores of the players with the top five scores...

void Leaderboard::printTopFive(vector<Player> boardVect)
{   
    cout << endl << "HERE ARE THE PLAYERS WITH THE TOP FIVE SCORES!" << endl;
    
    for (int I = 0; I < 5; ++I)
    {
        cout << I + 1 << ". " << boardVect.at(I).playerName << "\t\t\t\t\t" << boardVect.at(I).playerScore << endl;
    }
}