#include "../Leaderboard.h"
#include "gtest/gtest.h"

TEST(addToLeaderBoard, callTest)
{
    Player userPlayer;
    userPlayer.playerName = "Michael";
    userPlayer.playerScore = 400;
    vector<Player> testVect;
    Leaderboard testLeader;
    EXPECT_NO_THROW(testLeader.addToLeaderBoard(testVect, userPlayer));
}

TEST(addToLeaderBoard, checkName)
{
    Player userPlayer;
    userPlayer.playerName = "Michael";
    userPlayer.playerScore = 400;
    vector<Player> testVect;
    Leaderboard testLeader;
    testLeader.addToLeaderBoard(testVect, userPlayer);
    EXPECT_EQ(testVect.at(0).playerName, "Michael");
}

TEST(addToLeaderBoard, checkScore)
{
    Player userPlayer;
    userPlayer.playerName = "Michael";
    userPlayer.playerScore = 400;
    vector<Player> testVect;
    Leaderboard testLeader;
    testLeader.addToLeaderBoard(testVect, userPlayer);
    EXPECT_EQ(testVect.at(0).playerScore, 400);
}

TEST(addToLeaderBoard, updateScore)
{
    Player userPlayer;
    userPlayer.playerName = "Michael";
    userPlayer.playerScore = 400;
    vector<Player> testVect;
    Leaderboard testLeader;
    testLeader.addToLeaderBoard(testVect, userPlayer);
    userPlayer.playerScore = 600;
    testLeader.addToLeaderBoard(testVect, userPlayer);
    EXPECT_EQ(testVect.at(0).playerScore, 600);
}

TEST(addToLeaderBoard, addNewPlayer)
{
    Player userPlayer1;
    userPlayer1.playerName = "Michael";
    userPlayer1.playerScore = 400;
    Player userPlayer2;
    userPlayer2.playerName = "John";
    userPlayer2.playerScore = 350;
    vector<Player> testVect;
    Leaderboard testLeader;
    testLeader.addToLeaderBoard(testVect, userPlayer1);
    testLeader.addToLeaderBoard(testVect, userPlayer2);
    userPlayer1.playerScore = 600;
    testLeader.addToLeaderBoard(testVect, userPlayer1);
    EXPECT_EQ(testVect.at(1).playerScore, 350);
}

TEST(sortLeaderBoard, testSortOne)
{
    Player userPlayer1;
    Player userPlayer2;
    Player userPlayer3;

    userPlayer1.playerName = "Bruce";
    userPlayer1.playerScore = 770;

    userPlayer2.playerName = "Cameron";
    userPlayer2.playerScore = 220;

    userPlayer3.playerName = "Kenneth";
    userPlayer3.playerScore = 430;

    vector<Player> testVect;
    Leaderboard testLeader;

    testLeader.addToLeaderBoard(testVect, userPlayer1);
    testLeader.addToLeaderBoard(testVect, userPlayer2);
    testLeader.addToLeaderBoard(testVect, userPlayer3);
    
    testLeader.sortLeaderBoard(testVect);

    EXPECT_EQ(testVect.at(2).playerName, "Cameron");
}

TEST(sortLeaderBoard, testSortTwo)
{
    Player userPlayer1;
    Player userPlayer2;
    Player userPlayer3;

    userPlayer1.playerName = "Nina";
    userPlayer1.playerScore = 150;

    userPlayer2.playerName = "Julia";
    userPlayer2.playerScore = 330;

    userPlayer3.playerName = "Sabrina";
    userPlayer3.playerScore = 470;

    vector<Player> testVect;
    Leaderboard testLeader;

    testLeader.addToLeaderBoard(testVect, userPlayer1);
    testLeader.addToLeaderBoard(testVect, userPlayer2);
    testLeader.addToLeaderBoard(testVect, userPlayer3);
    
    testLeader.sortLeaderBoard(testVect);

    EXPECT_EQ(testVect.at(0).playerName, "Sabrina");
}

TEST(printTopFive, testAscending)
{
    Player userPlayer1;
    Player userPlayer2;
    Player userPlayer3;
    Player userPlayer4;
    Player userPlayer5;
    Player userPlayer6;
    Player userPlayer7;

    userPlayer1.playerName = "Nina";
    userPlayer1.playerScore = 150;

    userPlayer2.playerName = "Julia";
    userPlayer2.playerScore = 160;

    userPlayer3.playerName = "Sabrina";
    userPlayer3.playerScore = 240;

    userPlayer4.playerName = "Elizabeth";
    userPlayer4.playerScore = 410;

    userPlayer5.playerName = "Samantha";
    userPlayer5.playerScore = 470;

    userPlayer6.playerName = "Ashley";
    userPlayer6.playerScore = 720;

    userPlayer7.playerName = "Brianna";
    userPlayer7.playerScore = 840;

    vector<Player> testVect;
    Leaderboard testLeader;

    testLeader.addToLeaderBoard(testVect, userPlayer1);
    testLeader.addToLeaderBoard(testVect, userPlayer2);
    testLeader.addToLeaderBoard(testVect, userPlayer3);
    testLeader.addToLeaderBoard(testVect, userPlayer4);
    testLeader.addToLeaderBoard(testVect, userPlayer5);
    testLeader.addToLeaderBoard(testVect, userPlayer6);
    testLeader.addToLeaderBoard(testVect, userPlayer7);
    
    testLeader.sortLeaderBoard(testVect);

    testLeader.printTopFive(testVect);

    EXPECT_EQ(testVect.at(3).playerScore, 410);
}

TEST(printTopFive, testMixed)
{
    Player userPlayer1;
    Player userPlayer2;
    Player userPlayer3;
    Player userPlayer4;
    Player userPlayer5;
    Player userPlayer6;
    Player userPlayer7;

    userPlayer1.playerName = "Nina";
    userPlayer1.playerScore = 420;

    userPlayer2.playerName = "Julia";
    userPlayer2.playerScore = 40;

    userPlayer3.playerName = "Sabrina";
    userPlayer3.playerScore = 630;

    userPlayer4.playerName = "Elizabeth";
    userPlayer4.playerScore = 920;

    userPlayer5.playerName = "Samantha";
    userPlayer5.playerScore = 990;

    userPlayer6.playerName = "Ashley";
    userPlayer6.playerScore = 310;

    userPlayer7.playerName = "Brianna";
    userPlayer7.playerScore = 670;

    vector<Player> testVect;
    Leaderboard testLeader;

    testLeader.addToLeaderBoard(testVect, userPlayer1);
    testLeader.addToLeaderBoard(testVect, userPlayer2);
    testLeader.addToLeaderBoard(testVect, userPlayer3);
    testLeader.addToLeaderBoard(testVect, userPlayer4);
    testLeader.addToLeaderBoard(testVect, userPlayer5);
    testLeader.addToLeaderBoard(testVect, userPlayer6);
    testLeader.addToLeaderBoard(testVect, userPlayer7);
    
    testLeader.sortLeaderBoard(testVect);

    testLeader.printTopFive(testVect);

    EXPECT_EQ(testVect.at(0).playerScore, 990);
}
