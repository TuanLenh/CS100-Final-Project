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
void characterInformation(Character user, Character user2){
    if (user.getHealth() <0 ) 
    {
        user.setHealth(0);
    }
    if (user2.getHealth() <0 ) 
    {
        user2.setHealth(0);
    }
    cout << user.getName() << "'s HP: " << user.getHealth() << " / Status: " << user.getStatus() << endl;
    cout << user2.getName() << "'s HP: " << user2.getHealth() << " / Status: " << user2.getStatus() << endl << endl; 
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

// check for valid input during battle in Multiplayers mode
int checkUserActChoice2(int num){
    while((num != 1 and num != 2) or (cin.fail())){
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

void bossAttack(Character & user, Character & boss, int defenseCounter, int turn, int endStatus){
    AttackFunction gameAction;
    // Boss's heavy attack
    if(boss.getStatus() == "Normal" and turn == 6){
        cout << boss.getName() << " uses heavy attack." << endl;
        gameAction.bossHeavyAttack(boss, user, defenseCounter);
        characterInformation(user, boss);
    }
    // Boss's simple attack
    else if(boss.getStatus() == "Normal"){
        cout << boss.getName() << " uses simple attack." << endl;
        gameAction.attackFunction(boss, user, defenseCounter);
        characterInformation(user, boss);
    }
    // If Boss is under effect, it can't attack user
    else if(endStatus > turn and (boss.getStatus() == "Sleeping" or boss.getStatus() == "Paralyzing" or boss.getStatus() == "Frozen")){
        cout << boss.getName() << " is under status aliment" << endl;
        characterInformation(user, boss);
    }
    // Boss wakes up based on calculation above and attack user
    else if(endStatus <= turn and (boss.getStatus() == "Sleeping" or boss.getStatus() == "Paralyzing" or boss.getStatus() == "Frozen")){
    boss.setStatus("Normal");
    cout << boss.getName() << " has awaken" << endl;
    cout << boss.getName() << " attacks." << endl;
    gameAction.attackFunction(boss, user, defenseCounter);
    characterInformation(user, boss);
    }
}

void userAction(Character & user, Character & boss, int & defenseCounter, int & ultiCounter){
    ScreenLayout output;
    AttackFunction gameAction;
    UltimateSkill skill;
    int userActChoice;

    characterInformation(user, boss);
    output.battleAction();
    cin >> userActChoice;
    userActChoice = checkUserActChoice(userActChoice);

    // attack if user input 1
    if(userActChoice == 1){
        cout << "Use attack" << endl;
        gameAction.attackFunction(user, boss, 0);
        characterInformation(user, boss);
    }
    // defense if user input 2
    else if(userActChoice == 2){
        cout << "Use defense" << endl << endl;
        defenseCounter = 1;
    }
    // use ultimate skill if user input 4
    else if(userActChoice == 4){
        // user can only use ultimate skill once per battle. If they try to use it again, they lost their turn
        if(ultiCounter == 0){
            skill.useUltimateSkill(user, boss);
            output.UltimateSkillsOutputSingle(user);
            characterInformation(user, boss);
            ++ ultiCounter;
        }
        else{
            cout << "Ultimate Skill is unavailable now! Turn lost" << endl;
            characterInformation(user, boss);
        }
    }
}

void userAction2(Character & user1, Character & user2, int turn, int endStatus, int & ultiCounter){
    ScreenLayout output;
    UltimateSkill skill;
    AttackFunction gameAction;
    int userActChoice;

    if(user1.getStatus() == "Normal"){
        characterInformation(user1, user2);
        output.MultibattleAction();
        cin >> userActChoice;
        userActChoice = checkUserActChoice2(userActChoice);

        // attack if user input 1
        if(userActChoice == 1){
            cout << "Use attack" << endl;
            gameAction.attackFunction(user1, user2, 0);
            characterInformation(user1, user2);
        }
        // use ultimate skill if user input 2
        else if(userActChoice == 2){
            // user can only use ultimate skill once per battle. If they try to use it again, they lost their turn
            if(ultiCounter == 0){
                skill.useUltimateSkill(user1, user2);
                output.UltimateSkillsOutputMulti(user1, user2);
                characterInformation(user1, user2);
                ++ ultiCounter;
            }
            else{
                cout << "Ultimate Skill is unavailable now! Turn lost" << endl;
                characterInformation(user1, user2);
            }
        }
    }
    else if(endStatus > turn and (user1.getStatus() == "Sleeping" or user1.getStatus() == "Paralyzing" or user1.getStatus() == "Frozen")){
        cout << user1.getName() << " is under status aliment" << endl;
        characterInformation(user1, user2);
    }
    else if(endStatus <= turn and (user1.getStatus() == "Sleeping" or user1.getStatus() == "Paralyzing" or user1.getStatus() == "Frozen")){
        user1.setStatus("Normal");
        cout << user1.getName() << " has awaken" << endl;
        cout << user1.getName() << " attacks." << endl;
        gameAction.attackFunction(user1, user2, 0);
        characterInformation(user1, user2);
    }
}

void userIsDead(Character & user, Character & boss, int totalScore, int & endGameChoice, Player userPlayer, vector<Player> & leaderBoardVector){
    ScreenLayout output;
    Leaderboard leaderBoardFunction;
    ReturnStat renewStat;

    output.singlePlayerDefeat(totalScore);
    cin >> endGameChoice;
    endGameChoice = checkEndGameInput(endGameChoice);

    leaderBoardFunction.addToLeaderBoard(leaderBoardVector, userPlayer);
    leaderBoardFunction.sortLeaderBoard(leaderBoardVector);
    leaderBoardFunction.printTopFive(leaderBoardVector);

    renewStat.returnToOriginal(user, boss);
}

void bossIsDead(Character & user, Character & boss, int totalScore, int thisScore, int & endGameChoice, Player userPlayer, vector<Player> & leaderBoardVector){
    ScreenLayout output;
    Leaderboard leaderBoardFunction;
    ReturnStat renewStat;

    output.singlePlayerVictory(thisScore, totalScore);
    cin >> endGameChoice;
    endGameChoice = checkEndGameInput(endGameChoice);

    // update score and print leaderboard
    leaderBoardFunction.addToLeaderBoard(leaderBoardVector, userPlayer);
    leaderBoardFunction.sortLeaderBoard(leaderBoardVector);
    leaderBoardFunction.printTopFive(leaderBoardVector);

    renewStat.returnToOriginal(user, boss);
}

void finalBossIsDead(Character & user, Character & boss, int totalScore, int thisScore, Player userPlayer, vector<Player> & leaderBoardVector){
    ScreenLayout output;
    Leaderboard leaderBoardFunction;
    ReturnStat renewStat;

    output.singlePlayerVictory(thisScore, totalScore);
    // update score and print leaderboard
    leaderBoardFunction.addToLeaderBoard(leaderBoardVector, userPlayer);
    leaderBoardFunction.sortLeaderBoard(leaderBoardVector);
    leaderBoardFunction.printTopFive(leaderBoardVector);

    renewStat.returnToOriginal(user, boss);
}

int firstPlayer(Character playerOne, Character playerTwo) {
    if (playerOne.getSpeed() > playerTwo.getSpeed())
    {
        return 1;
    }
    return 2;
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

    Character Boss1         (11, "Boss level 1",         100, 15, 15, 0, "Normal");
    Character Boss2         (12, "Boss level 2",         120, 20, 20, 0, "Normal");
    Character Boss3         (13, "Boss level 3",         140, 25, 25, 0, "Normal");
    
    // apply ReturnStat class and ScreenLayout Class
    ScreenLayout output;
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
            int endGameChoice = 0;

            int turn = 0;
            int endStatus = 0;

            int totalScore = 0;

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
                userAction(userChar, Boss1, defenseCounter, ultiCounter);

                // check if Boss is still alive or not after user's turn
                // if boss is dead, move to victory screen and return both characters' stat to original for future battles.
                if(Boss1.isAlive() == false){
                    int thisScore = userChar.getHealth() * 10;
                    totalScore = totalScore + thisScore;
                    userPlayer.playerScore = totalScore;
                    bossIsDead(userChar, Boss1, totalScore, thisScore, endGameChoice, userPlayer, leaderBoardVector);

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
                bossAttack(userChar, Boss1, defenseCounter, turn, endStatus);
                defenseCounter = 0;

                // If user is dead, then show defeat screen and return both characters' stat to original for future battle.
                if(userChar.isAlive() == false){
                    userPlayer.playerScore = totalScore;
                    userIsDead(userChar, Boss1, totalScore, endGameChoice, userPlayer, leaderBoardVector);

                    break;
                }
            }
            
            // endGameChoice must either be 1 or 2 at this point
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
                    userAction(userChar, Boss2, defenseCounter, ultiCounter);

                    // check if Boss is still alive or not after user's turn
                    // if boss is dead, move to victory screen and return both characters' stat to original for future battles.
                    if(Boss2.isAlive() == false){
                        int thisScore = userChar.getHealth() * 10;
                        totalScore = totalScore + thisScore;
                        userPlayer.playerScore = totalScore;
                        bossIsDead(userChar, Boss2, totalScore, thisScore, endGameChoice, userPlayer, leaderBoardVector);

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
                    bossAttack(userChar, Boss2, defenseCounter, turn, endStatus);
                    defenseCounter = 0;

                    // If user is dead, then show defeat screen and return both characters' stat to original for future battle.
                    if(userChar.isAlive() == false){
                        userPlayer.playerScore = totalScore;
                        userIsDead(userChar, Boss2, totalScore, endGameChoice, userPlayer, leaderBoardVector);
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
                    userAction(userChar, Boss3, defenseCounter, ultiCounter);

                    if(Boss3.isAlive() == false){
                        int thisScore = userChar.getHealth() * 10;
                        totalScore = totalScore + thisScore;
                        userPlayer.playerScore = totalScore;
                        finalBossIsDead(userChar, Boss3, totalScore, thisScore, userPlayer, leaderBoardVector);

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
                    bossAttack(userChar, Boss3, defenseCounter, turn, endStatus);
                    defenseCounter = 0;

                    // If user is dead, then show defeat screen and return both characters' stat to original for future battle.
                    if(userChar.isAlive() == false){
                        userPlayer.playerScore = totalScore;
                        userIsDead(userChar, Boss3, totalScore, endGameChoice, userPlayer, leaderBoardVector);
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
            int turn = 0;
            int ultiCounter1 = 0;
            int ultiCounter2 = 0;
            int endStatus1 = 0;
            int endStatus2 = 0;
            string userOneName;
            string userTwoName;

            //Ask for both users' name 
            output.multiFirstPlayerName();
            cin >> userOneName;
            
            output.multiSecondPlayerName();
            cin >> userTwoName;

            //Ask for characer and check for valid input
            output.player(userOneName);
            output.characterSelection();
            cin >> userOneChar;
            userOneChar = checkCharacterSelectionInput(userOneChar);
            Character userChar1 = selectChar(Mario, Luigi, Peach, Bowser_Jr, Kirby, Sonic, Cinderella, McQueen, Mater, SpongeBob, userOneChar);

            //Ask for characer and check for valid input
            output.player(userTwoName);
            output.characterSelection();
            cin >> userTwoChar;
            userTwoChar = checkCharacterSelectionInputTwo(userTwoChar, userOneChar);
            Character userChar2 = selectChar(Mario, Luigi, Peach, Bowser_Jr, Kirby, Sonic, Cinderella, McQueen, Mater, SpongeBob, userTwoChar);
            
            // print turn, ask for user's choice of action and check for valid input
            // Case 1: first player goes first
            if (firstPlayer(userChar1, userChar2)== 1){
                while (userChar1.isAlive() && userChar2.isAlive()){
                    ++ turn;
                    cout << "Turn: " << turn << endl;
                    output.player(userOneName);
                    userAction2(userChar1, userChar2, turn, endStatus1, ultiCounter1);
                    
                    
                    if (userChar2.isAlive() == false){ 
                        output.multiVictory(userOneName);
                        break;
                    }
                
                    if(userChar2.getStatus() == "Sleeping" && endStatus2 == 0){
                        endStatus2 = turn + 5;
                    }
                    if ((userChar2.getStatus() == "Paralyzing" || userChar2.getStatus() == "Frozen") && endStatus2 == 0){
                        endStatus2 = turn + 3;
                    }

                    ++ turn;
                    cout << "Turn: " << turn << endl;
                    output.player(userTwoName);
                    userAction2(userChar2, userChar1, turn, endStatus2, ultiCounter2);

                    if (userChar1.isAlive() == false){ 
                        output.multiVictory(userTwoName);
                        break;
                    }

                    if(userChar1.getStatus() == "Sleeping" && endStatus1 == 0){
                        endStatus1 = turn + 5;
                    }
                    if ((userChar1.getStatus() == "Paralyzing" || userChar1.getStatus() == "Frozen") && endStatus1 == 0){
                        endStatus1 = turn + 3;
                    }   
                }
            }
            //Case 2: second player goes first
            else {  
                while (userChar1.isAlive() && userChar2.isAlive()){
                    ++ turn;
                    cout << "Turn: " << turn << endl;
                    output.player(userTwoName);
                    userAction2(userChar2, userChar1, turn, endStatus1, ultiCounter1);
                    
                    
                    if (userChar1.isAlive() == false){ 
                        output.multiVictory(userTwoName);
                        break;
                    }
                
                    if(userChar1.getStatus() == "Sleeping" && endStatus1 == 0){
                        endStatus1 = turn + 5;
                    }
                    if ((userChar1.getStatus() == "Paralyzing" || userChar1.getStatus() == "Frozen") && endStatus1 == 0){
                        endStatus1 = turn + 3;
                    }

                    ++ turn;
                    cout << "Turn: " << turn << endl;
                    output.player(userOneName);
                    userAction2(userChar1, userChar2, turn, endStatus2, ultiCounter2);

                    if (userChar2.isAlive() == false){
                        output.multiVictory(userOneName);
                        break;
                    }

                    if(userChar2.getStatus() == "Sleeping" && endStatus2 == 0){
                        endStatus2 = turn + 5;
                    }
                    if ((userChar2.getStatus() == "Paralyzing" || userChar2.getStatus() == "Frozen") && endStatus2 == 0){
                        endStatus2 = turn + 3;
                    }   
                }
            }

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

// Need to implement: inventory, ultimate skill output message
//fix bugs in multiplayer modes and HP>=0