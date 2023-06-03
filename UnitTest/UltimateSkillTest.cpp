#include <gtest/gtest.h>
#include <iostream>
#include "../Ultimate.h"
#include "../Character.h"

//Create unit test for Ultimate Skills


TEST(UltimateSkillTest, checkSonic)
{
    Character SpongeBob(10 ,"SpongeBob",100, 12, 18, 20, "Normal");
    Character Sonic(6, "Sonic",100, 14, 15, 100, "Normal");

    UltimateSkill ulti;
    ulti.useUltimateSkill(Sonic, SpongeBob);
    EXPECT_EQ(SpongeBob.getStatus(), "Paralyzing");
    EXPECT_EQ(SpongeBob.getDefense(), 16);
}
TEST(UltimateSkillTest, checkSonic2)
{
    Character Cinderella(7, "Cinderella",100, 10, 10, 67, "Normal");
    Character Sonic(6, "Sonic",100, 14, 15, 100, "Normal");

    UltimateSkill ulti;
    ulti.useUltimateSkill(Sonic, Cinderella);
    EXPECT_EQ(Cinderella.getStatus(), "Paralyzing");
    EXPECT_EQ(Cinderella.getDefense(), 9);
}

TEST(UltimateSkillTest, checkCinderella)
{
    Character Cinderella(7, "Cinderella",100, 10, 10, 67, "Normal");
    Character Sonic(6, "Sonic",100, 14, 15, 100, "Normal");

    UltimateSkill ulti;
    ulti.useUltimateSkill(Cinderella, Sonic);
    EXPECT_EQ(Cinderella.getHealth(), 200);
}
TEST(UltimateSkillTest, checkCinderella2)
{
    Character Cinderella(7, "Cinderella",100, 10, 10, 67, "Normal");
    Character McQueen(8,"Lightning McQueen",100, 18, 13, 80, "Normal");

    UltimateSkill ulti;
    ulti.useUltimateSkill(Cinderella, McQueen);
    EXPECT_EQ(Cinderella.getHealth(), 200);
}

TEST(UltimateSkillTest, checkPeach)
{
    Character Mario(1, "Mario", 100, 20, 16, 75, "Normal");
    Character Peach(3, "Peach", 100, 16, 10, 70, "Normal");

    UltimateSkill ulti;
    ulti.useUltimateSkill(Peach, Mario);
    EXPECT_EQ(Mario.getAttack(), 16);
} 

TEST(UltimateSkillTest, checkPeach2)
{
    Character Bowser_Jr(4, "Bowser Jr", 100, 11, 20, 30, "Normal");
    Character Peach(3, "Peach", 100, 16, 10, 70, "Normal");

    UltimateSkill ulti;
    ulti.useUltimateSkill(Peach, Bowser_Jr);
    EXPECT_EQ(Bowser_Jr.getAttack(), 8);
} 

TEST(UltimateSkillTest, checkMario)
{
    Character Mario(1, "Mario", 100, 20, 16, 75, "Normal");
    Character Peach(3, "Peach", 100, 16, 10, 70, "Normal");

    UltimateSkill ulti;
    ulti.useUltimateSkill(Mario, Peach);
    EXPECT_EQ(Mario.getAttack(), 26);
}

TEST(UltimateSkillTest, checkKirby)
{
    Character Bowser_Jr(4, "Bowser Jr", 100, 11, 20, 30, "Normal");
    Character Kirby(5, "Kirby", 100, 20, 13, 40, "Normal");

    UltimateSkill ulti;
    ulti.useUltimateSkill(Kirby, Bowser_Jr);
    EXPECT_EQ(Bowser_Jr.getDefense(), 16);
}

TEST(UltimateSkillTest, checkBowser)
{
    Character Bowser_Jr(4, "Bowser Jr", 100, 11, 20, 30, "Normal");
    Character Kirby(5, "Kirby", 100, 20, 13, 40, "Normal");

    UltimateSkill ulti;
    ulti.useUltimateSkill(Bowser_Jr, Kirby);
    EXPECT_EQ(Bowser_Jr.getDefense(), 26);
}



TEST(UltimateSkillTest, checkMcQueen)
{
    Character McQueen(8,"Lightning McQueen",100, 18, 13, 80, "Normal");
    Character Kirby(5, "Kirby", 100, 20, 13, 40, "Normal");

    UltimateSkill ulti;
    ulti.useUltimateSkill(McQueen,Kirby);
    EXPECT_EQ(McQueen.getDefense(), 14);
    EXPECT_EQ(McQueen.getAttack(), 20);
}

TEST(UltimateSkillTest, checkMater)
{
    Character Mater(9, "Mater",100, 10, 19, 50, "Normal");
    Character Kirby(5, "Kirby", 100, 20, 13, 40, "Normal");

    UltimateSkill ulti;
    ulti.useUltimateSkill(Mater,Kirby);
    EXPECT_EQ(Kirby.getDefense(), 11);
    EXPECT_EQ(Kirby.getAttack(), 18);
}

TEST(UltimateSkillTest, checkLuigi)
{
    Character Luigi(2, "Luigi",100, 15, 11, 60, "Normal");
    Character Kirby(5, "Kirby", 100, 20, 13, 40, "Normal");

    UltimateSkill ulti;
    ulti.useUltimateSkill(Luigi,Kirby);
    EXPECT_EQ(Kirby.getStatus(), "Sleeping");
}

TEST(UltimateSkillTest, checkSpongeBob)
{
    Character SpongeBob(10 ,"SpongeBob",100, 12, 18, 20, "Normal");
    Character Luigi(2, "Luigi",100, 15, 11, 60, "Normal");

    UltimateSkill ulti;
    ulti.useUltimateSkill(SpongeBob,Luigi);
    EXPECT_EQ(Luigi.getStatus(), "Frozen");
    EXPECT_EQ(Luigi.getAttack(), 13);
}


