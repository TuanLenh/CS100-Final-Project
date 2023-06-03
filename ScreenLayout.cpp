#include "ScreenLayout.h"
#include <iostream>

void ScreenLayout::mainMenu()
{
    cout << "Super Smash Bros." << endl;
    cout << endl << "1. Single Player Mode" << endl;
    cout << "2. Multi Player Mode" << endl;
    cout << "3. Quit Game" << endl;
    cout << endl << "Please enter a number to choose a game mode: ";
}

void ScreenLayout::singlePlayerName()
{
    cout << "Please enter your name: ";
}

void ScreenLayout::multiFirstPlayerName()
{
    cout << "Please enter first player's name: ";
}

void ScreenLayout::multiSecondPlayerName()
{
    cout << "Please enter second player's name: ";
}

void ScreenLayout::characterSelection()
{
    cout << "Super Smash Bros." << endl;
    cout << endl << "Character List:" << endl;
    cout << "1. Mario" << endl;
    cout << "2. Luigi" << endl;
    cout << "3. Peach" << endl;
    cout << "4. Bowser Jr." << endl;
    cout << "5. Kirby" << endl;
    cout << "6. Sonic" << endl;
    cout << "7. Cinderella" << endl;
    cout << "8. Lightning McQueen" << endl;
    cout << "9. Mater" << endl;
    cout << "10. SpongeBob" << endl;
    cout << endl << "Please enter a number to choose a character: ";
}

void ScreenLayout::battleAction()
{
    cout << "Options for Action:" << endl;
    cout << "1. Attack" << endl;
    cout << "2. Block" << endl;
    cout << "3. Inventory" << endl;
    cout << "4. Ultimate Skill" << endl;
    cout << endl << "Please choose a number to perform an action: ";
}

void ScreenLayout::singlePlayerVictory(int thisGameScore, int totalScore)
{
    cout << "You have won the battle!" << endl;
    cout << endl << "Your score for this battle is: " << thisGameScore << endl;
    cout << "Your total score is: " << totalScore << endl;
    cout << endl << "Type 1 to quit or 2 to continue: ";
}

void ScreenLayout::singlePlayerVictoryLastBattle(int thisGameScore, int totalScore)
{
    cout << "You have won the battle!" << endl;
    cout << endl << "Your score for this battle is: " << thisGameScore << endl;
    cout << "Your total score is: " << totalScore << endl;
    cout << endl << "End Game - Return to main menu!" << endl;
}

void ScreenLayout::singlePlayerDefeat(int totalScore)
{
    cout << "You have lost the battle!" << endl;
    cout << endl << "Your score for this battle is: 0" << endl;
    cout << "Your total score is: " << totalScore << endl;
    cout << endl << "Type 1 to quit: ";
}

void ScreenLayout::multiPlayerBattleEnd()
{
    cout << "[Player Name] has won the battle!" << endl;
    cout << endl << "Type 1 to continue." << endl;
}

void ScreenLayout::player(const string & input) {
        cout << input << "\'s turn: " << endl;
}

void ScreenLayout::multiVictory(const string & playerName)
{
    cout << "Congrats! " << playerName << " has won the battle." << endl;
}

void ScreenLayout::MultibattleAction() {
    cout << "Options for Action:" << endl;
    cout << "1. Attack" << endl;
    cout << "2. Ultimate Skill" << endl;
    cout << endl << "Please choose a number to perform an action: ";
}

void ScreenLayout::UltimateSkillsOutputSingle(Character & user)
{
    cout << user.getName() << " has just used the ultimate skill against the boss! " << user.getName() << " won't be able to use the ultimate skill again for the rest of the battle." << endl;
}

void ScreenLayout::UltimateSkillsOutputMulti(Character & user1, Character & user2)
{
    cout << user1.getName() << " has used the ultimate skill against " << user2.getName() << "! " << user1.getName() << " won't be able to use the ultimate skill again for the rest of the battle." << endl;
}