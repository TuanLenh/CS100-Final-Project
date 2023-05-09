[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-718a45dd9cf7e7f842a935f5ebbe5719a5e09af4491e668f4dbf3b35d5cca122.svg)](https://classroom.github.com/online_ide?assignment_repo_id=10871404&assignment_repo_type=AssignmentRepo)

# Super Smash Bros. - A Text-Based RPG
 
 Authors: [Aditya Surapaneni](https://github.com/AdityaS1426), [Ashwin Ramaseshan](https://github.com/Ashwin987), [Juliana Ho](https://github.com/Juliana06029), [Tuan Lenh](https://github.com/TuanLenh)

# Project Description

## General Description

The Super Smash Bros. text-based RPG is a terminal-based role-playing game in which the user is able to select betweeen ten different Nintendo-themed characters at the start of the game. The user will be able to choose a single-player mode, where the user will battle an AI character, or a multiplayer mode, where two users can battle each other locally. Each character features unique attacks, various defense tactics, and distinctive health statistics, and every attack/defense move will affect the health of the each character in a different manner. The game comes to an end when a character's health reaches "zero", at which point the remaining character is declared a winner.

## Why is this project important or interesting to us?

Super Smash Bros. is considered one of the most iconic, influential video games of all time, capturing the hearts of many for generations. It's a crossover fighting game (developed by Nintendo) that features numerous characters (such as Mario, Luigi, and Bowser) with special powers, unique statistics, and level-up abilities. One of the best features of the game is its multiplayer aspet; it allows users to battle with family, friends, and other individuals. After playing this game for hours upon hours as children, it's extremely appealing to create a simpler text-based terminal version of the game for this project. In doing so, our team will be able to reminisce about the past, bringing happiness to us all. As a result of enjoying the game as children, the development process for this project will actually be fun rather than seem like a chore.

## What languages/tools/technologies does our team plan to use?

There are various tools our group will utilize throughout the process of developing our project. 

* [Visual Studio Code](https://code.visualstudio.com/) - Visual Studio Code (also known as VS Code) is a source-code editor developed by Microsoft. The majority of our coding will be performed using this program, as it allows for the inclusion of a wealth of flexible extensions to aid developers with projects. The user interface is extremely simple to use, and access to a terminal is very helpful as well.

* [Git](https://git-scm.com/) - Git will be utilized as our version control system, or VCS. Git allows users to manage files with ease when collaborating on projects, and it's extremely useful for non-linear workflows.

* [GitHub](https://github.com/) - GitHub is an Internet-based hosting service for software development/version control using Git. GitHub acts like a remote repository, assisting in collaborative development. GitHub will be very helpful, as it will allow our team to work on different aspects of the project simultaneously.

* C++ - C++ is a high-level programming language that was developed in the late-1970s to the early-1980s by Bjarne Stroustrup. It's used in a wide variety of applications, and will be the basis of the Super Smash Bros. RPG. C++ was chosen as the primary programming lanaguage due to familiarity with the language by all of the team members.

* [CMake](https://cmake.org/) - CMake is a Linux tool that allows users to compile code into executables. This tool will primarily be used to compile our code using simple, effectively-named executables for a smooth development process.

* [Valgrind](https://valgrind.org/) - Valgrind is a Linux tool that helps users debug memory-based errors in code. Our group will utilize this tool to fix memory leaks in our program.

* [Google Test Framework](https://github.com/google/googletest) - The Google Test Framework is a variety of tools developed by Google in order to assist developers with creating/running a diverse volume of test cases to ensure the program works effectively, and all expected outputs are present.

## What will be the input/output of our project?

* Input - In the game, the user will be able to enter a number from 1 to 10 to choose a favorite character. The user will also need to enter 1 to 4 during a battle to choose an appropriate move. There are 4 moves for user to choose from: an attack skill, a defense skill, an ultimate skill, and the use of an item from inventory.

* Output - All attack skills will inflict damage on opponents, while defense skills will reduce damage inflicted by the opponent. Ultimate skills and inventory items can consist of stronger attack skills, stronger defense skills, or a self-buff. All of these moves will result in a health percentage as an output, and, of course, the resulting output can vary widely depending on the combination of attacks, defenses, and powers used; specifically, each move will affect the health of the character in a different manner. Once the health of a character reaches zero, the game will end, displaying the winner of the game.

## What are the features that the project provides?

There are a variety of features present in this program:

* The user will have the ability to input a username of their choice. (This will mainly be used for leaderboard purposes.)
* The user has up to 10 characters to choose from, with different statistics/skill sets.
* There will be 4 moves to choose from: attack, defend, ultimate skill, and inventory item.
* The user will be able to choose from two game modes: single-player mode, where the user can battle AI bosses with a choice of character, and multiplayer mode, where two users can battle each other for a chance at victory. 
* In single-player mode, each user will receive a score for each run of the game based on the number of bosses defeated, and a leaderboard will display the top five users with the highest scores.
* In multiplayer mode, the winner will be determined by whichever character reaches zero HP (health points) last.
* There will be a game score display option. Users can see top 5 highest scores for each mode.
* There will be quit and restart options during the match.

## Navigation Diagram

The Navigation Diagram below demonstrates the flow of the program. The user is prompted with three options in the menu screen, which are single player mode, multi player mode, and an option to quit the program.

In single player mode, the user can pick one of the ten characters, and this character will be used in a battle with the various bosses. If the user wins the battle, the user is moved to the victory/score screen, where the user can see their score from the last battle. Subsequently, the leaderboard screen displays the top five highest scores of all time. After reaching this screen, the user can decide to continue to battle a stronger boss or quit the game. If the user loses a battle, the user will be brought to the menu screen, and can restart the game if desired.

In multi player mode, two users can pick two different characters in order to battle each other. The first player to lose all of the health points for their character loses the battle, while the remaining character wins the battle. After the battle, the users are prompted with the victory screen, and are then returned to the main menu.

![Screenshot 2023-05-07 115146](https://user-images.githubusercontent.com/79182581/236697085-34d4d867-dc9d-42fd-b595-0d1c7f47561f.png)

## Screen Layouts

Click [here](https://docs.google.com/document/d/1qu0Qhb_C_aOsg948D_91QyLSxDGLezo956u34qaNToo/edit?usp=sharing) to access the Screen Layouts document.

The user is greeted with the main menu when the game starts, and the user has three options to choose from. The user can enter "1" for single player mode, "2" for multi player mode, and "3" for quitting the program. In single player mode, the user can enter their name, followed by the ability to pick a number from 1-10 to choose a character in the Character Choosing Screen. After choosing the character, the user is moved to the Battle Screen, where they can enter a number from 1-4 to control the character. "1" represents the ability to attack, "2" represents the ability to block, "3" represents the ability to use an inventory item, and "4" represents the ability to use an ultimate attack. In the Victory Screen, the user can view their score from the previous battle, as well as their total cumulative score. The user can then enter "C" to move to the Leaderboard Screen, where the user can enter "1" or "2" to continue battling or quit the game, respectively. In case the user loses the game, they are moved to a Defeat Screen, as well as a Leaderboard Screen for Losers where they can only enter "C" to return to the Main Menu.

In multi player mode, both users can enter their name, as well as pick characters through the Multiplayer Menu Screen, First player Name Screen, Second Player Name Screen, First Character Choosing Screen, and the Second Character Choosing Screen. Then, both users are prompted to the Battle Screen, where they can enter a number from 1-4 to perfrom the respective actions detailed above. The game ends when a character's health points reduces to zero, and the Battle End Screen announces the winner. The users are asked to enter "C" to return to Main Menu.

## Class Diagram

The UML Class Diagram below consists of various important classes, each of which represnt a vital part of the program.

There are thirteen different derived classes which inherit from a "Character" base class. These thirteen base classes consist of three "Boss" characters, which the player will fight during the single player mode of the RPG, and ten other characters, which can be chosen by the user to fight the bosses in the single player mode or fight against friends in multi player mode. As can be seen, these base classes inherit the "healthPoints" variable from the base class, as well as setter/getter functions for the "healthPoints" variable. The base class also consists of two virtual functions, which will be modified in the derived classes based on the abilities/skills of each character.

The "Player" class handles all the details regarding the user, such as their user name, theas well as the score they will receive, along with the appropriate setter/getter functions. This class will be essential for the main menu of the program, as the user will need to interact with the main menu constantly.

There's also a "Game Engine" class, which will essentially handle all of the logic/rules of the game, such as when how each character's attack/defense moves will affect another character's corresponding moves, when the game will end based on the mode (single player or multi player) chosen by the player, how a score will be assigned to each player, etc. This class will utilize instances of Character, as well as Player objects, as these need to utilized in order to set up the logic for the game.

In terms of the relationships between the classes, inheritance is definitely apparent, as the character/boss derived classes inherit from a generic "Character" base class. Composition is also present in the program, as the "Game Engine" class is composed of various characters; if the game engine was deleted, these characters would not have any functionality, rendering them useless. The "Game Engine" class is also composed of "Player" class objects, and if the "Game Engine" class was deleted, these "Player" objects would be rendered useless. Finally, there's an aggregation relationship between the "Player" class and the "Character" class, as these types of objects can technically exist separately without too many negative effects.

![CS100 - UML Class Diagram](https://user-images.githubusercontent.com/79182581/237007095-f9d2cd9c-a106-4a8a-a0eb-e2954793fab9.png)

 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on week 8 during lab time.
 
 > BEFORE the meeting you should do the following:
 > * Update your class diagram from Phase II to include any feedback you received from your TA/grader.
 > * Considering the SOLID design principles, reflect back on your class diagram and think about how you can use the SOLID principles to improve your design. You should then update the README.md file by adding the following:
 >   * A new class diagram incorporating your changes after considering the SOLID principles.
 >   * For each update in your class diagram, you must explain in 3-4 sentences:
 >     * What SOLID principle(s) did you apply?
 >     * How did you apply it? i.e. describe the change.
 >     * How did this change help you write better code?
 > * Perform a new sprint plan like you did in Phase II.
 > * You should also make sure that your README file (and Project board) are up-to-date reflecting the current status of your project and the most recent class diagram. Previous versions of the README file should still be visible through your commit history.
 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
