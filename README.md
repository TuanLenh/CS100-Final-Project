[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-718a45dd9cf7e7f842a935f5ebbe5719a5e09af4491e668f4dbf3b35d5cca122.svg)](https://classroom.github.com/online_ide?assignment_repo_id=10871404&assignment_repo_type=AssignmentRepo)
 > As you complete each section you **must** remove the prompt text. Every *turnin* of this project includes points for formatting of this README so keep it clean and keep it up to date. 
 > Prompt text is any lines beginning with "\>"
 > Replace anything between \<...\> with your project specifics and remove angle brackets. For example, you need to name your project and replace the header right below this line with that title (no angle brackets).

# Super Smash Bros. - A Text-Based RPG
 
 Authors: [Aditya Surapaneni](https://github.com/AdityaS1426), [Ashwin Ramaseshan](https://github.com/Ashwin987), [Juliana Ho](https://github.com/Juliana06029), [Tuan Lenh](https://github.com/TuanLenh)

# Project Description

## Why is this project important or interesting to us?

Super Smash Bros. is considered one of the most iconic, influential video games of all time, capturing the hearts of many for generations. It's a crossover fighting game (developed by Nintendo) that features numerous characters (such as Mario, Luigi, and Bowser) with special powers, unique statistics, and level-up abilities. One of the best features of the game is its multiplayer aspet; it allows users to battle with family, friends, and other individuals. After playing this game for hours upon hours as children, it's extremely appealing to create a simpler text-based terminal version of the game for this project.

## What languages/tools/technologies do you plan to use?

There are various tools our group will utilize throughout the process of developing our project. 

* Visual Studio Code - Visual Studio Code (also known as VS Code) is a source-code editor developed by Microsoft. The majority of our coding will be performed using this program, as it allows for the inclusion of a wealth of flexible extensions to aid developers with projects. The user interface is extremely simple to use, and access to a terminal is very helpful as well.

* Git - Git will be utilized as our version control system, or VCS. Git allows users to manage files with ease when collaborating on projects, and it's extremely useful for non-linear workflows.

* GitHub - GitHub is an Internet-based hosting service for software development/version control using Git. GitHub acts like a remote repository, assisting in collaborative development. GitHub will be very helpful, as it will allow our team to work on different aspects of the project simultaneously.

* C++ - C++ is a high-level programming language that was developed in the late-1970s to the early-1980s by Bjarne Stroustrup. It's used in a wide variety of applications, and will be the basis of the Super Smash Bros. RPG. C++ was chosen as the primary programming lanaguage due to familiarity with the language by all of the team members.

## What will be the input/output of your project?

User can enter number from 1 to 10 to choose characters. User may also enter 1 to 4 during battle to choose a move . There are 4 moves for user to choose and those are using an attack skill, defense skill, ultimate skill, and items in inventory. All attack skills will inflict damage on opponent while defense skill will reduce damage taken by the opponent. Ultimate skills and items can either be stronger attack skills, defense skills or self-buff.

## What are the features that the project provides?

User has up to 10 characters with different stats and skill sets to choose for 2 game mode which are single player mode and 2-player mode. In single player mode, user can select a certain number of characters and battle a boss. Each time a boss is defeated, player can choose to move on to the next floor and battle a stronger boss. Each user will receive a score for each run of the game and a leaderscoreboard will show users with highest score. In 2-player mode, 2 users can pick two character and battle each other. Any user who has their character's HP(health point) reduces to zero first will lose.  
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
 > Include a **class diagram(s)** for your project and a **description** of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper UML notation (as discussed in the course slides).
 
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
 
