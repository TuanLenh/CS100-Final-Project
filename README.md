[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-718a45dd9cf7e7f842a935f5ebbe5719a5e09af4491e668f4dbf3b35d5cca122.svg)](https://classroom.github.com/online_ide?assignment_repo_id=10871404&assignment_repo_type=AssignmentRepo)

# Super Smash Bros. - A Text-Based RPG
 
 Authors: [Aditya Surapaneni](https://github.com/AdityaS1426), [Ashwin Ramaseshan](https://github.com/Ashwin987), [Juliana Ho](https://github.com/Juliana06029), [Tuan Lenh](https://github.com/TuanLenh)

# Project Description

## General Description

The Super Smash Bros. text-based RPG is a terminal-based role-playing game in which the user is able to select betweeen ten different Nintendo-themed characters at the start of the game. The user will be able to choose a single-player mode, where the user will battle an AI character, or a multiplayer mode, where two users can battle each other locally. Each character features unique attacks, various defense tactics, and distinctive health statistics, and every attack/defense move will affect the health of the each character in a different manner. This game employs a combination of basic attacks/defense, special item, and ultimate skills usage(such as boosting/reducing attack/defense statistics, hypnotizing, paralyzing, freezing ) that can deal more damage or have specific properties. The game comes to an end when a character's health reaches "zero", at which point the remaining character is declared a winner.

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

* [Gcov](https://gcc.gnu.org/onlinedocs/gcc/Gcov.html) - Gcov is a source code coverage analysis and statement-by-statement profiling tool. Gcov generates exact counts of the number of times each statement in a program is executed and annotates source code to add instrumentation.

## What is the input/output of our project?

* Input - In the game, the user will be able to enter a number from 1 to 10 to choose a favorite character. In single mode, the user will also need to enter 1 to 4 during a battle to choose an appropriate move. There are 4 moves for user to choose from: an attack skill, a defense skill, an ultimate skill, and the use of an item from inventory. In multiplayer mode, each user needs to enter 1 or 2 to pick their action moves. There are 2 moves that users can choose from: an attack skill and an ultimate skill that acquired by chosen characters.

* Output - All attack skills will inflict damage on opponents, while defense skills will reduce damage inflicted by the opponent. Ultimate skills and inventory items can consist of stronger attack skills, stronger defense skills, or a self-buff. All of these moves will result in a health percentage as an output, and, of course, the resulting output can vary widely depending on the combination of attacks, defenses, and powers used; specifically, each move will affect the health of the character in a different manner. Once the health of a character reaches zero, the game will end, displaying the winner of the game.

## What are the features that the project provides?

There are a variety of features present in this program:

* The user will have the ability to input an username of their choice. (This will mainly be used for leaderboard purposes.)
* The user has up to 10 characters to choose from, with different statistics/skill sets.
* There will be 4 moves in the single-player mode to choose from: attack, defend, ultimate skill, and inventory item.
* There will be 2 moves in the multiplayer mode to choose from: attack and ultimate skill.
* The user will be able to choose from two game modes: single-player mode, where the user can battle AI bosses with a choice of character, and multiplayer mode, where two users can battle each other for a chance at victory. 
* In single-player mode, each user will receive a score for each run of the game based on the number of bosses defeated, and a leaderboard will display the top five users with the highest scores.
* In multiplayer mode, the loser will be determined by whichever character reaches zero HP (health points) first.
* There will be a game score display option. Users can see top 20 highest scores for single-player mode.
* There will be quit and restart options during the match.
* In multiplayer mode, first turn will be determined by the character's speed, whoever has higher speed would make the first move.

## Navigation Diagram

The Navigation Diagram below demonstrates the flow of the program. The user is prompted with three options in the menu screen, which are single player mode, multi player mode, and an option to quit the program.

In single player mode, the user can pick one of the ten characters, and this character will be used in a battle with the various bosses. If the user wins the battle, the user is moved to the victory/score screen, where the user can see their score from the last battle. Subsequently, the leaderboard screen displays the top five highest scores of all time. After reaching this screen, the user can decide to continue to battle a stronger boss or quit the game. If the user loses a battle, the user will be brought to the menu screen, and can restart the game if desired.

In multi player mode, two users can pick two different characters in order to battle each other. The first player to lose all of the health points for their character loses the battle, while the remaining character wins the battle. After the battle, the users are prompted with the victory screen, and are then returned to the main menu.

![UML diagram](https://github.com/cs100/final-project-asura003-arama035-tho076-tlenh002/assets/79182581/f6ba31ca-99ad-4a21-9823-7fbdc9764f77)

## Screen Layouts

Click [here](https://docs.google.com/document/d/1qu0Qhb_C_aOsg948D_91QyLSxDGLezo956u34qaNToo/edit?usp=sharing) to access the Screen Layouts document.

The user is greeted with the main menu when the game starts, and the user has three options to choose from. The user can enter "1" for single player mode, "2" for multi player mode, and "3" for quitting the program. In single player mode, the user can enter their name, followed by the ability to pick a number from 1-10 to choose a character in the Character Choosing Screen. After choosing the character, the user is moved to the Battle Screen, where they can enter a number from 1-4 to control the character. "1" represents the ability to attack, "2" represents the ability to block, "3" represents the ability to use an inventory item, and "4" represents the ability to use an ultimate attack. In the Victory Screen, the user can view their score from the previous battle, as well as their total cumulative score. The user can then enter "C" to move to the Leaderboard Screen, where the user can enter "1" or "2" to continue battling or quit the game, respectively. In case the user loses the game, they are moved to a Defeat Screen, as well as a Leaderboard Screen for Losers where they can only enter "C" to return to the Main Menu.

In multi player mode, both users can enter their name, as well as pick characters through the Multiplayer Menu Screen, First player Name Screen, Second Player Name Screen, First Character Choosing Screen, and the Second Character Choosing Screen. Then, both users are prompted to the Battle Screen, where they can enter a number from 1-2 to perfrom the respective actions detailed above. The game ends when a character's health points reduces to zero, and the Battle End Screen announces the winner. The users are asked to enter "C" to return to Main Menu.

## Class Diagram

The UML Class Diagram below consists of various important classes, each of which represnt a vital part of the program.

There are thirteen different derived classes which inherit from a "Character" base class. These thirteen base classes consist of three "Boss" characters, which the player will fight during the single player mode of the RPG, and ten other characters, which can be chosen by the user to fight the bosses in the single player mode or fight against friends in multi player mode. As can be seen, these base classes inherit the "healthPoints" variable from the base class, as well as setter/getter functions for the "healthPoints" variable. The base class also consists of two virtual functions, which will be modified in the derived classes based on the abilities/skills of each character.

The "Player" class handles all the details regarding the user, such as their user name, theas well as the score they will receive, along with the appropriate setter/getter functions. This class will be essential for the main menu of the program, as the user will need to interact with the main menu constantly.

There's also a "Game Engine" class, which will essentially handle all of the logic/rules of the game, such as when how each character's attack/defense moves will affect another character's corresponding moves, when the game will end based on the mode (single player or multi player) chosen by the player, how a score will be assigned to each player, etc. This class will utilize instances of Character, as well as Player objects, as these need to utilized in order to set up the logic for the game.

In terms of the relationships between the classes, inheritance is definitely apparent, as the character/boss derived classes inherit from a generic "Character" base class. Composition is also present in the program, as the "Game Engine" class is composed of various characters; if the game engine was deleted, these characters would not have any functionality, rendering them useless. The "Game Engine" class is also composed of "Player" class objects, and if the "Game Engine" class was deleted, these "Player" objects would be rendered useless. Finally, there's an aggregation relationship between the "Player" class and the "Character" class, as these types of objects can technically exist separately without too many negative effects.

![CS100 - UML Class Diagram](https://user-images.githubusercontent.com/79182581/237007095-f9d2cd9c-a106-4a8a-a0eb-e2954793fab9.png)

## Class Diagram (Updated)

The revised UML class diagram below is vastly different from the original UML class diagram above. Many of the classes were simplified for a better overall program structure, and the specifics of each class are more detailed.

The first, and possibly most important, class is the "Character" class. This class handles the various characteristics of each character, such as the character's name, attack, defense, and speed. There are getters/setters for each of these characteristics, and another function to determine whether the character is alive or not.

The "Character" class is composed of four different classes: the "Inventory" class, the "UltimateSkill" class, the "GameEngine" class, and the "ReturnStat" class. The "Inventory" class is responsible for handling the inventory system in the game; each character is allowed to utilize a health potion, an attack potion, or a defense potion. The "UltimateSkill" class is responsible for handling the ultimate skill of each character; there are a few different ones depending on each character, like a healing power, an increased attack, an increased defense, etc. The "GameEngine" class handles the attack for each character, which is slightly different depending on the character chosen due to the different attack statistics. Finally, the "ReturnStat" class ensures the statistics for each character are returned to their original levels after a battle is complete. The "composition" association is extremely important here, as if the "Character" class were deleted, there would be no use for "Inventory", "UltimateSkill", "GameEngine", and "ReturnStat"; essentially, these three classes would be useless, as they require Character objects for proper functionality.

The "Leaderboard" class handles the functionality for the leaderboard in the single player mode of the game, such as adding new players to the leaderboard, updating the scores of existing players, and sorting the leaderboard. The "Player" struct is extremely important for the functionality of this class, as it allows for the player's name, as well as the player's score, to be managed efficiently through the use of vectors. As a result, the "Player" struct has an aggregation relationship with the "Leaderboard" class.

Finally, the "ScreenLayouts" class is responsible for printing the various prompts our program utilizes. It prints the enus for each type of game mode, the battle actions, the victory screens, and the defeat screens.

![CS100 - UML Diagram (Final)](https://github.com/cs100/final-project-asura003-arama035-tho076-tlenh002/assets/129999279/d601e8a7-41ad-4b9b-8506-0eb300f88f48)

## SOLID Principles

* The UML diagram was updated to include a "ScreenLayout" class, which adheres to to the Single Responsibility Principle. Previously, the various different "text output" functions were combined with classes responsible for manipulating data, but with the creation of this new class, each respective class is in charge of its own functionality. In seaparating the responsibilities of each class, the code is more organized, easier to understand, and less cluttered, which aids in further development of the program.
* The modification of the UML diagram also accounted for the implementation of the Dependency Inversion Principle. Initially, there were separate classes for each character in the game, with a base "Character" class that utilized the low-level classes as parameters. However, this violates the DIP, so the low-level classes were eliminated in favor of a single "Character" class with its own implementation of each character. This change allowed for the structure of the program to become much less complicated, and allows for the code to be much more organized. There is no need to worry about changing multiple classes to fix a bug; instead, changes can be easily made to the single "Character" class, which makes the process much less challenging.
* The Open-Closed Principle was also accounted for in the new structure of the program. The classes were created with a specific purpose in mind, and the layout ensures no classes or functions will need to be modified in the future for additional features. For instance, a single player mode is already implemented into the program, but a multi player mode is still necessary. To add this feature, a "Multi Player" class can simply be added, and utilize the other classes (Character, ScreenLayout, etc.) to be fully functional. In designing the program in this manner, expansion should not be an issue when it comes to the coding process.
 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 
 Screenshots of the input/output after running your application
 * Main Menu:
 <img width="351" alt="image" src="https://github.com/cs100/final-project-asura003-arama035-tho076-tlenh002/assets/129914389/0e55bc03-c247-4865-b0d2-74c0e29ff301">
 
 * First option (single player mode) has been chosen and Character List gets displayed:
 <img width="362" alt="image" src="https://github.com/cs100/final-project-asura003-arama035-tho076-tlenh002/assets/129914389/420013e1-0174-4e02-a84b-4e1703da0827">
 
 * Character Basic Statistic and Action Options for single-player mode:
<img width="335" alt="image" src="https://github.com/cs100/final-project-asura003-arama035-tho076-tlenh002/assets/129914389/a7a756e6-97e1-4a07-b9c1-6e67218c906a">

 * First option (Attack) has been chosen:
<img width="362" alt="image" src="https://github.com/cs100/final-project-asura003-arama035-tho076-tlenh002/assets/129914389/19c985a7-5ee6-4d77-b8c6-3fe6c694f00d">

*  Or, second option (Defense) has been chosen:
<img width="332" alt="image" src="https://github.com/cs100/final-project-asura003-arama035-tho076-tlenh002/assets/129914389/e1bb359c-94bd-4f76-90a7-298e3d7b9560">

* Or, third option (inventory) has been chosen:
<img width="354" alt="image" src="https://github.com/cs100/final-project-asura003-arama035-tho076-tlenh002/assets/129914389/26667ad3-8973-4e19-8859-ef9556a06529">

* Health potion from inventory option has been used:
<img width="329" alt="image" src="https://github.com/cs100/final-project-asura003-arama035-tho076-tlenh002/assets/129914389/a0802366-aa19-4423-a7ff-1af2ac4a6c5c">

* Fourth option (ultimate skill) has been chosen:
<img width="973" alt="image" src="https://github.com/cs100/final-project-asura003-arama035-tho076-tlenh002/assets/129914389/861c2210-a7f9-41aa-919e-a10cf4f3a19f">

* Leaderboard
<img width="362" alt="image" src="https://github.com/cs100/final-project-asura003-arama035-tho076-tlenh002/assets/129914389/69f63bfe-8388-449e-a9fc-5e319d51e712">

* Multi-player mode has been chosen
<img width="345" alt="image" src="https://github.com/cs100/final-project-asura003-arama035-tho076-tlenh002/assets/129914389/d8976986-669b-4dc9-95ae-0bf6c26083a1">

* Action option for multiplayer mode
<img width="140" alt="image" src="https://github.com/cs100/final-project-asura003-arama035-tho076-tlenh002/assets/129914389/7f30f2c7-7811-4139-b756-1bd0d0055feb">



 ## Installation/Usage
The steps for installation is as follows
1. Git installation: If Git is not insatlled on your computer, you will need to install and download it in order to access our repository. You can download it from https://git-scm.com/downloads .
2. Acesss repository: Once Git is sucessfully installed on your computer, open the Git terminal and navigate to the directory where you want to clone our repository.
3. Git clone: Use the git clone command followed by the URL of our repository (which can be found in the upper right hand corner on our repository page). This will in turn create a new directory with our repository name. After this to run our game enter the cmake and make commands in the terminal. 
4. Git Pull: If there are any updates in our repository and you want to implement these newest changes, simply git pull command which will sucessfully fetch any new updates there are to the game.
 
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.   
 * We use GoogleTest to debug/troubleshoot each of our implemented features. We chose it due to its autonomy and reliabity. GoogleTest is able to run each test case on different objects. In the case of a test failure, it has ability to execute the test indepentdently, which enables quick debugging.
 * We created various test cases for each implemented feature(test suite).
 * In Character unit test, we created 12 different test cases to verify Character functions get called approriately. 
