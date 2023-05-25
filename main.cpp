#include <iostream>
#include <string>
#include <vector>
#include "Character.h"
#include "Ultimate.h"
#include "ScreenLayout.h"
#include "ReturnStat.h"
#include "Leaderboard.h"
#include "attackfunction.h"

using namespace std;

// print name, hp and status of character
void characterInformation(Character user, Character boss){
    cout << user.getName() << "'s HP: " << user.getHealth() << " / Status: " << user.getStatus() << endl;
    cout << boss.getName() << "'s HP: " << boss.getHealth() << " / Status: " << boss.getStatus() << endl << endl; 
}

// return character based on user's input
Character selectChar(Character c1, Character c2, Character c3, Character c4, Character c5, Character c6, Character c7, Character c8, Character c9, Character c10, int num){
    if(num == c1.getID()){
        return c1;
    }
    else if(num == c2.getID()){
        return c2;
    }
    else if(num == c3.getID()){
        return c3;
    }
    else if(num == c4.getID()){
        return c4;
    }
    else if(num == c5.getID()){
        return c5;
    }
    else if(num == c6.getID()){
        return c6;
    }
    else if(num == c7.getID()){
        return c7;
    }
    else if(num == c8.getID()){
        return c8;
    }
    else if(num == c9.getID()){
        return c9;
    }
    return c10;
}

// check for valid input during battle
int checkUserActChoice(int num){
    while((num != 1 and num != 2 and num != 3 and num != 4) or (cin.fail())){
        cout << "Please enter again: ";
        cin.clear();
        cin.ignore(256,'\n');
        cin >> num;
    }
    return num;
}

// check for valid main menu input
int checkMainMenuInput(int num){
    while((num != 1 and num != 2 and num != 3) or (cin.fail())){
        cout << "Please enter again: ";
        cin.clear();
        cin.ignore(256,'\n');
        cin >> num;
    }
    return num;
}

// check for valid end game input
int checkEndGameInput(int num){
    while((num != 1 and num != 2) or cin.fail()){
        cout << "Please enter again: ";
        cin.clear();
        cin.ignore(256,'\n');
        cin >> num;
    }
    return num;
}

// check for valid character selection input
int checkCharacterSelectionInput(int num){
    while((num != 1 and num != 2 and num != 3 and num != 4 and num != 5 and num != 6
        and num != 7 and num != 8 and num != 9 and num != 10) or cin.fail()){
            cout << "Please enter again: ";
            cin.clear();
            cin.ignore(256,'\n');
            cin >> num;
        }
    return num;
}

// check for valid second character selection input
int checkCharacterSelectionInputTwo(int num, int firstNum){
    while((num != 1 and num != 2 and num != 3 and num != 4 and num != 5 and num != 6
        and num != 7 and num != 8 and num != 9 and num != 10) or num == firstNum or cin.fail()){
            cout << "Please enter again: ";
            cin.clear();
            cin.ignore(256,'\n');
            cin >> num;
        }
    return num;
}

int main(){
    // create characters
    Character Mario         (1, "Mario",                 100, 20, 16, 75, "Normal");
    Character Luigi         (2, "Luigi",                 100, 15, 11, 60, "Normal");
    Character Peach         (3, "Peach",                 100, 16, 10, 70, "Normal");
    Character Bowser_Jr     (4, "Bowser Jr",             100, 11, 20, 30, "Normal");
    Character Kirby         (5, "Kirby",                 100, 20, 13, 40, "Normal");
    Character Sonic         (6, "Sonic",                 100, 14, 15, 100, "Normal");
    Character Cinderella    (7, "Cinderella",            100, 10, 10, 67, "Normal");
    Character McQueen       (8, "Lightning McQueen",     100, 18, 13, 80, "Normal");
    Character Mater         (9, "Mater",                 100, 10, 19, 50, "Normal");
    Character SpongeBob     (10 ,"SpongeBob",            100, 12, 18, 20, "Normal");

    Character Boss1         (11, "Boss level 1",         100, 30, 30, 0, "Normal");
    Character Boss2         (12, "Boss level 2",         120, 50, 50, 0, "Normal");
    Character Boss3         (13, "Boss level 3",         140, 70, 70, 0, "Normal");
    
    // apply ReturnStat class and ScreenLayout Class
    ReturnStat renewStat;
    ScreenLayout output;
    Leaderboard leaderBoardFunction;
    AttackFunction gameAction;
    vector<Player> leaderBoardVector(20);
    int userInput;

    // Print main menu, ask for input and check for valid input
    output.mainMenu();
    cin >> userInput;
    userInput = checkMainMenuInput(userInput);

    while(true){
        if(userInput == 1){
            string userName;
            int charNum;
            UltimateSkill skill;
            int userActChoice = 0;
            int turn = 0;
            int endStatus = 0;
            int totalScore = 0;
            int thisScore = 0;
            int endGameChoice = 0;
            int ultiCounter = 0;
            int defenseCounter = 0;

            //Ask for user name and character, then create Player Struct;
            output.singlePlayerName();
            cin >> userName;
            output.characterSelection();
            cin >> charNum;
            Player userPlayer;
            userPlayer.playerName = userName;
            userPlayer.playerScore = 0;

            //Check for valid input
            charNum = checkCharacterSelectionInput(charNum);
            Character userChar = selectChar(Mario, Luigi, Peach, Bowser_Jr, Kirby, Sonic, Cinderella, McQueen, Mater, SpongeBob, charNum);
            
            while(userChar.isAlive() == true and Boss1.isAlive() == true){
                // print turn, ask for user's choice of action and check for valid input
                ++ turn;
                cout << "Turn: " << turn << endl;
                characterInformation(userChar, Boss1);
                output.battleAction();
                cin >> userActChoice;
                userActChoice = checkUserActChoice(userActChoice);

                // attack if user input 1
                if(userActChoice == 1){
                    cout << "Use attack" << endl;
                    gameAction.attackFunction(userChar, Boss1, 0);
                    characterInformation(userChar, Boss1);
                }
                // defense if user input 2
                else if(userActChoice == 2){
                    cout << "Use defense" << endl << endl;
                }
                // use ultimate skill if user input 4
                else if(userActChoice == 4){
                    // user can only use ultimate skill once per battle. If they try to use it again, they lost their turn
                    if(ultiCounter == 0){
                        skill.useUltimateSkill(userChar, Boss1);
                        characterInformation(userChar, Boss1);
                        ++ ultiCounter;
                    }
                    else{
                        cout << "Ultimate Skill is unavailable now! Turn lost" << endl;
                        characterInformation(userChar, Boss1);
                    }
                }

                // check if Boss is still alive or not after user's turn
                // if boss is dead, move to victory screen and return both characters' stat to original for future battles.
                if(Boss1.isAlive() == false){
                    thisScore = userChar.getHealth() * 10;
                    totalScore = totalScore + thisScore;
                    output.singlePlayerVictory(thisScore, totalScore);
                    cin >> endGameChoice;
                    endGameChoice = checkEndGameInput(endGameChoice);

                    // update score and print leaderboard
                    userPlayer.playerScore = totalScore;
                    leaderBoardFunction.addToLeaderBoard(leaderBoardVector, userPlayer);
                    leaderBoardFunction.sortLeaderBoard(leaderBoardVector);
                    leaderBoardFunction.printTopFive(leaderBoardVector);

                    renewStat.returnToOriginal(userChar, Boss1);
                    break;
                }

                // calculate when boss returns to normal if they are under special effect.
                if(Boss1.getStatus() == "Sleeping" and endStatus == 0){
                    endStatus = turn + 5;
                }
                if((Boss1.getStatus() == "Paralyzing" or Boss1.getStatus() == "Frozen") and endStatus == 0){
                    endStatus = turn + 3;
                }

                // Boss's turn.
                ++ turn;
                cout << "Turn: " << turn << endl;
                // Boss simply attack
                if(Boss1.getStatus() == "Normal"){
                    cout << "Boss level 1 attacks user" << endl;
                    gameAction.attackFunction(Boss1, userChar, defenseCounter);
                    characterInformation(userChar, Boss1);
                }
                // If Boss is under effect, it can't attack user
                else if(endStatus > turn and (Boss1.getStatus() == "Sleeping" or Boss1.getStatus() == "Paralyzing" or Boss1.getStatus() == "Frozen")){
                    cout << "Boss level 1 is under status aliment" << endl;
                    characterInformation(userChar, Boss1);
                }
                // Boss wakes up based on calculation above and attack user
                else if(endStatus <= turn and (Boss1.getStatus() == "Sleeping" or Boss1.getStatus() == "Paralyzing" or Boss1.getStatus() == "Frozen")){
                    Boss1.setStatus("Normal");
                    cout << "Boss level 1 has awaken" << endl;
                    cout << "Boss level 1 attacks user" << endl;
                    gameAction.attackFunction(Boss1, userChar, defenseCounter);
                    characterInformation(userChar, Boss1);
                }

                // If user is dead, then show defeat screen and return both characters' stat to original for future battle.
                if(userChar.isAlive() == false){
                    output.singlePlayerDefeat(totalScore);
                    cin >> endGameChoice;
                    endGameChoice = checkEndGameInput(endGameChoice);

                    userPlayer.playerScore = totalScore;
                    leaderBoardFunction.addToLeaderBoard(leaderBoardVector, userPlayer);
                    leaderBoardFunction.sortLeaderBoard(leaderBoardVector);
                    leaderBoardFunction.printTopFive(leaderBoardVector);

                    renewStat.returnToOriginal(userChar, Boss1);
                    break;
                }
            }
            
            // endGameChoice should either be 1 or 2 at this point
            if(endGameChoice == 2){
                // reset ultiCounter and status timer for new battle
                ultiCounter = 0;
                endStatus = 0;

                cout << endl << "Continue battling" << endl;
                turn = 0;
                while(userChar.isAlive() == true and Boss2.isAlive() == true){
                    // print turn, ask for user's choice of action and check for valid input
                    ++ turn;
                    cout << "Turn: " << turn << endl;
                    characterInformation(userChar, Boss2);
                    output.battleAction();
                    cin >> userActChoice;
                    userActChoice = checkUserActChoice(userActChoice);

                    // attack if user input 1
                    if(userActChoice == 1){
                        cout << "Use attack" << endl;
                        gameAction.attackFunction(userChar, Boss2, 0);
                        characterInformation(userChar, Boss2);
                    }
                    // defense if user input 2
                    else if(userActChoice == 2){
                        cout << "Use defense" << endl << endl;
                    }
                    // use ultimate skill if user input 4
                    else if(userActChoice == 4){
                        // user can only use ultimate skill once per battle. If they try to use it again, they lost their turn
                        if(ultiCounter == 0){
                            skill.useUltimateSkill(userChar, Boss2);
                            characterInformation(userChar, Boss2);
                            ++ultiCounter;
                        }
                        else{
                            cout << "Ultimate Skill is unavailable now! Turn lost" << endl;
                            characterInformation(userChar, Boss2);
                        }
                    }

                    // check if Boss is still alive or not after user's turn
                    // if boss is dead, move to victory screen and return both characters' stat to original for future battles.
                    if(Boss2.isAlive() == false){
                        thisScore = userChar.getHealth() * 10;
                        totalScore = totalScore + thisScore;
                        output.singlePlayerVictory(thisScore, totalScore);
                        cin >> endGameChoice;
                        endGameChoice = checkEndGameInput(endGameChoice);

                        // update score and print leaderboard
                        userPlayer.playerScore = totalScore;
                        leaderBoardFunction.addToLeaderBoard(leaderBoardVector, userPlayer);
                        leaderBoardFunction.sortLeaderBoard(leaderBoardVector);
                        leaderBoardFunction.printTopFive(leaderBoardVector);

                        renewStat.returnToOriginal(userChar, Boss2);
                        break;
                    }
                    
                    // calculate when boss returns to normal if they are under special effect.
                    if(Boss2.getStatus() == "Sleeping" and endStatus == 0){
                    endStatus = turn + 5;
                    }
                    if((Boss2.getStatus() == "Paralyzing" or Boss2.getStatus() == "Frozen") and endStatus == 0){
                        endStatus = turn + 3;
                    }

                    // Boss's turn
                    ++ turn;
                    cout << "Turn: " << turn << endl;
                    // Boss simply attack
                    if(Boss2.getStatus() == "Normal"){
                        cout << "Boss level 2 attacks user" << endl;
                        gameAction.attackFunction(Boss2, userChar, defenseCounter);
                        characterInformation(userChar, Boss2);
                    }
                    // If Boss is under effect, it can't attack user
                    else if(endStatus > turn and (Boss2.getStatus() == "Sleeping" or Boss2.getStatus() == "Paralyzing" or Boss2.getStatus() == "Frozen")){
                        cout << "Boss level 2 is under status aliment" << endl;
                        characterInformation(userChar, Boss2);
                    }
                    // Boss wakes up based on calculation above and attack user
                    else if(endStatus <= turn and (Boss2.getStatus() == "Sleeping" or Boss2.getStatus() == "Paralyzing" or Boss2.getStatus() == "Frozen")){
                        Boss2.setStatus("Normal");
                        cout << "Boss level 2 has awaken" << endl;
                        cout << "Boss level 2 attacks user" << endl;
                        gameAction.attackFunction(Boss2, userChar, defenseCounter);
                        characterInformation(userChar, Boss2);
                    }
                    // If user is dead, then show defeat screen and return both characters' stat to original for future battle.
                    if(userChar.isAlive() == false){
                        output.singlePlayerDefeat(totalScore);
                        cin >> endGameChoice;
                        endGameChoice = checkEndGameInput(endGameChoice);

                        userPlayer.playerScore = totalScore;
                        leaderBoardFunction.addToLeaderBoard(leaderBoardVector, userPlayer);
                        leaderBoardFunction.sortLeaderBoard(leaderBoardVector);
                        leaderBoardFunction.printTopFive(leaderBoardVector);

                        renewStat.returnToOriginal(userChar, Boss2);
                        break;
                    }
                }
            }

            if(endGameChoice == 2){
                ultiCounter = 0;
                endStatus = 0;
                cout << endl << "continue battling" << endl;
                turn = 0;
                while(userChar.isAlive() == true and Boss3.isAlive() == true){
                    ++ turn;
                    cout << "Turn: " << turn << endl;
                    characterInformation(userChar, Boss3);
                    output.battleAction();
                    cin >> userActChoice;
                    userActChoice = checkUserActChoice(userActChoice);

                    if(userActChoice == 1){
                        cout << "Use attack" << endl;
                        gameAction.attackFunction(userChar, Boss3, 0);
                        characterInformation(userChar, Boss3);
                    }
                    else if(userActChoice == 2){
                        cout << "Use defense" << endl << endl;
                    }
                    else if(userActChoice == 4){
                        if(ultiCounter == 0){
                            skill.useUltimateSkill(userChar, Boss3);
                            characterInformation(userChar, Boss3);
                            ++ultiCounter;
                        }
                        else{
                            cout << "Ultimate Skill is unavailable now! Turn lost" << endl;
                            characterInformation(userChar, Boss3);
                        }
                    }

                    if(Boss3.isAlive() == false){
                        thisScore = userChar.getHealth() * 10;
                        totalScore = totalScore + thisScore;
                        output.singlePlayerVictoryLastBattle(thisScore, totalScore);

                        // update score and print leaderboard
                        userPlayer.playerScore = totalScore;
                        leaderBoardFunction.addToLeaderBoard(leaderBoardVector, userPlayer);
                        leaderBoardFunction.sortLeaderBoard(leaderBoardVector);
                        leaderBoardFunction.printTopFive(leaderBoardVector);

                        renewStat.returnToOriginal(userChar, Boss3);
                        break;
                    }

                    if(Boss3.getStatus() == "Sleeping" and endStatus == 0){
                    endStatus = turn + 5;
                    }
                    if((Boss3.getStatus() == "Paralyzing" or Boss3.getStatus() == "Frozen") and endStatus == 0){
                        endStatus = turn + 3;
                    }

                    ++ turn;
                    cout << "Turn: " << turn << endl;
                    if(Boss3.getStatus() == "Normal"){
                        cout << "Boss level 3 attacks user" << endl;
                        gameAction.attackFunction(Boss3, userChar, defenseCounter);
                        characterInformation(userChar, Boss3);
                    }
                    else if(endStatus > turn and (Boss3.getStatus() == "Sleeping" or Boss3.getStatus() == "Paralyzing" or Boss3.getStatus() == "Frozen")){
                        cout << "Boss level 3 is under status aliment" << endl;
                        characterInformation(userChar, Boss3);
                    }
                    else if(endStatus <= turn and (Boss3.getStatus() == "Sleeping" or Boss3.getStatus() == "Paralyzing" or Boss3.getStatus() == "Frozen")){
                        Boss3.setStatus("Normal");
                        cout << "Boss level 3 has awaken" << endl;
                        cout << "Boss level 3 attacks user" << endl;
                        gameAction.attackFunction(Boss3, userChar, defenseCounter);
                        characterInformation(userChar, Boss3);
                    }

                    if(userChar.isAlive() == false){
                        output.singlePlayerDefeat(totalScore);

                        userPlayer.playerScore = totalScore;
                        leaderBoardFunction.addToLeaderBoard(leaderBoardVector, userPlayer);
                        leaderBoardFunction.sortLeaderBoard(leaderBoardVector);
                        leaderBoardFunction.printTopFive(leaderBoardVector);

                        renewStat.returnToOriginal(userChar, Boss3);
                        break;
                    }
                }
            }

            output.mainMenu();
            cin >> userInput;
            userInput = checkMainMenuInput(userInput);
        }
        else if(userInput == 2){
            int userOneChar;
            int userTwoChar;

            string userOneName;
            string userTwoName;

            //Ask for both users' name 
            output.multiFirstPlayerName();
            cin >> userOneName;
            output.multiSecondPlayerName();
            cin >> userTwoName;

            //Ask for characer and check for valid input
            output.characterSelection();
            cin >> userOneChar;
            userOneChar = checkCharacterSelectionInput(userOneChar);
            Character userChar1 = selectChar(Mario, Luigi, Peach, Bowser_Jr, Kirby, Sonic, Cinderella, McQueen, Mater, SpongeBob, userOneChar);

            //Ask for characer and check for valid input
            output.characterSelection();
            cin >> userTwoChar;
            userTwoChar = checkCharacterSelectionInputTwo(userTwoChar, userOneChar);
            Character userChar2 = selectChar(Mario, Luigi, Peach, Bowser_Jr, Kirby, Sonic, Cinderella, McQueen, Mater, SpongeBob, userTwoChar);

            output.mainMenu();
            cin >> userInput;
            userInput = checkMainMenuInput(userInput);
        }
        else if(userInput == 3){
            cout << "END GAME!!!" << endl;
            break;
        }
    }


    return 0; 
}



// To test the game, please
// g++ main.cpp Character.cpp Ultimate.cpp ScreenLayout.cpp ReturnStat.cpp -o runGame
// ./runGame
// or 
// cmake .
// make
// ./runGame

// Need to implement: multiplayer mode, inventory, game engine,
// completed implementation: return to normal class, prevent ultimate spam, valid input when user input character instead of number, leaderboard