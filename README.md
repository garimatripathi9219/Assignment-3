🎮 Rock–Paper–Scissors Console Game

A colorful and interactive Rock–Paper–Scissors game made in C language, running on the Windows Console with attractive UI and emojis.

📌 Features

✔ Colorful UI using Windows Console Colors
✔ Emoji-based choices (🪨 📄 ✂)
✔ Player vs Computer gameplay
✔ Randomized computer moves
✔ Scoreboard:

Player Wins

Computer Wins

Draws
✔ Replay option
✔ Final scoreboard summary
✔ Clean and user-friendly interface

🕹️ How to Play

Choose one of the options:

Number	Choice	Emoji
1	Rock	🪨
2	Paper	📄
3	Scissors	✂
Game Rules:

Rock 🪨 beats Scissors ✂

Scissors ✂ beats Paper 📄

Paper 📄 beats Rock 🪨

Same choices → Match Draw

📂 Project Structure
main.c   → Full source code  
README.md → Game description & instructions  

🖥️ Output Preview
============ ROCK  PAPER  SCISSORS ============

Your Score: 3     Computer Score: 2     Draw: 1

1. Rock     🪨
2. Paper    📄
3. Scissors ✂

Enter your choice (1-3):


And after the match:

=============== FINAL SCOREBOARD ===============

Your Wins:       7
Computer Wins:   4
Matches Drawn:   3
================================================

⚙️ How It Works Internally

srand(time(0)) initializes random generator only once

Computer chooses random number from 1 to 3

Colorful output using:

SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorCode);


Game repeats until user presses n / N

▶️ How to Run
Step 1: Compile

Use GCC (MinGW) or any C compiler:

gcc game.c -o game

Step 2: Run
game

💡 Extensions You Can Add (Optional)

Want to upgrade? Here are ideas:

Match history

Best of 5 / Best of 10 mode

Sound effects

Animation

Loading screen

Difficulty levels

(If you want, I can add any of these ✨)
