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

 > ## Phase II
 > In addition to completing the "User Interface Specification" and "Class Diagram" sections below, you will need to:
 > * Create an "Epic" (note) for each feature. Place these epics in the `Product Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Break down the "Epics" into smaller actionable user stories (i.e. smaller development tasks). Convert them into issues and assign them to team members. Place these in the `TODO` column.
 >   * These cards should represent roughly 7 days worth of development time for your team. Then, once the sprint is over you should be repeating these steps to plan a new sprint, taking you until your second scrum meeting with the reader in phase III.
 > * Schedule two check-ins using Calendly. You need to pick both time slots during your lab on week 6. Your entire team must be present for both check-ins.
 >   * The first check-in needs to be scheduled with your lab TA. During that meeting, you will discuss your project design/class diagram from phase II.
 >   * The second check-in should be scheduled with a reader. During that meeting you will discuss:
 >     * The tasks you are planning for the first sprint
 >     * How work will be divided between the team members
## User Interface Specification
 > Include a navigation diagram for your screens and the layout of each of those screens as desribed below. For all the layouts/diagrams, you can use any tool such as PowerPoint or a drawing program. (Specification requirement is adapted from [this template](https://redirect.cs.umbc.edu/~mgrass2/cmsc345/Template_UI.doc))

### Navigation Diagram
> Draw a diagram illustrating how the user can navigate from one screen to another. Here is an [example](https://creately.com/diagram/example/ikfqudv82/user-navigation-diagram-classic?r=v). It can be useful to label each symbol that represents a screen so that you can reference the screens in the next section or the rest of the document if necessary. Give a brief description of what the diagram represents.

### Screen Layouts
> Include the layout of each of your screens. The layout should describe the screen’s major components such as menus and prompts for user inputs, expected output, and buttons (if applicable). Explain what is on the layout, and the purpose of each menu item, button, etc. If many screens share the same layout, start by describing the general layout and then list the screens that will be using that layout and the differences between each of them.

## Class Diagram

![CS100 - UML Class Diagram](https://user-images.githubusercontent.com/129999279/236694987-5354d22c-dfb3-403f-ba4a-4e34971bc4f3.png)
 
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
 
