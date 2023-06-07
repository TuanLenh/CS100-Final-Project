#include "ScreenLayout.h"
#include <iostream>

void ScreenLayout::mainMenu()
{
    cout << endl;
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

void ScreenLayout::inventoryMenu(){
    cout << "Inventory option:" << endl;
    cout << "1. Health potion" << endl;
    cout << "2. Attack potion" << endl;
    cout << "3. Defense potion" << endl;
    cout << endl << "Please choose a potion: ";
}


void ScreenLayout::UltimateSkillsOutputSingle(Character & user)
{
    cout << user.getName() << " has just used the ultimate skill against the boss! " << user.getName() << " won't be able to use the ultimate skill again for the rest of the battle." << endl;
}

void ScreenLayout::UltimateSkillsOutputMulti(Character & user1, Character & user2)
{
    cout << user1.getName() << " has used the ultimate skill against " << user2.getName() << "! " << user1.getName() << " won't be able to use the ultimate skill again for the rest of the battle." << endl;
}

void ScreenLayout::UltimateSkillMessage(const Character & char1, const Character & char2)
{
    cout << char1.getName();
    if (char1.getName() == "Mario") 
    {
        cout << "\'s attack power has been significantly boosted!" ;
    }
    else if (char1.getName() == "Bowser Jr" )
    {
        cout << "\'s defense statistic has received a substantial boost, making them significantly harder to penetrate!";
    }
    else if (char1.getName() == "Peach" )
    {
        cout << " unleashes their ultimate skill, crippling" << char2.getName() << "\'s attack power! ";
    }
    else if (char1.getName() == "Kirby" )
    {
        cout << " unleashes their ultimate skill, shattering" << char2.getName() <<  "'\'s defenses! ";
    }
    else if (char1.getName() == "Lightning McQueen" )
    {
        cout << "\'s attack power and defense statistic has been boosted!";
    }
    else if (char1.getName() == "Mater" )
    {
        cout << " unleashes their ultimate skill, shattering" << char2.getName() <<  "'\'s attack power and defenses! ";
    }
    else if (char1.getName() == "Luigi" )
    {
        cout << "\'s ultimate skill lulls " << char2.getName() << " into a state of profound sleep. Seize this opportunity to unleash a barrage of unstoppable strikes!";
    }
    else if (char1.getName() == "SpongeBob" )
    {
        cout << "\'s ultimate skill freezes "  <<  char2.getName() <<", rendering them immobile and reducing their attack strength.";
    }
    else if (char1.getName() == "Sonic" )
    {
        cout << "\'s ultimate skill paralyzes "  <<  char2.getName() <<", rendering them immobile and reducing their defenses.";
    }
    else if (char1.getName() == "Cinderella" )
    {
        cout << "\'s ultimate skill rejuvenates her body, restoring her health to its peak. ";
    }

    cout << endl << endl;
}

void ScreenLayout::HealthPotionMsg(const Character & char1)
{
    cout << char1.getName() << "\'s current health increases by 50hp.";
    cout << endl << endl;

}

void ScreenLayout::AttackPotionMsg(const Character & char1)
{
    cout << char1.getName() << "\'s attack power increases by 30%.";
    cout << endl << endl;

}

void ScreenLayout::DefensePotionMsg(const Character & char1)
{
    cout << char1.getName() << "\'s defense increases by 30%.";
    cout << endl << endl;

}