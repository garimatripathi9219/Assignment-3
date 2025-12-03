#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

void color(int x) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);
}

void playGame()
{
    int player, computer;
    int playerScore = 0, compScore = 0, draw = 0;
    char ch;

    while(1)
    {
        system("cls");
        color(11);
        printf("============ ROCK  PAPER  SCISSORS ============\n\n");
        color(14);
        printf("Your Score: %d     Computer Score: %d     Draw: %d\n\n", playerScore, compScore, draw);

        color(10);
        printf("1. Rock     🪨\n");
        color(13);
        printf("2. Paper    📄\n");
        color(12);
        printf("3. Scissors ✂\n");

        color(14);
        printf("\nEnter your choice (1-3): ");
        scanf("%d", &player);

        if(player < 1 || player > 3)
        {
            color(12);
            printf("Invalid choice! Press any key...");
            getch();
            continue;
        }

        computer = rand() % 3 + 1;   // FIXED RANDOM

        color(11);
        printf("\nYou chose: ");
        if(player == 1) printf("Rock 🪨");
        else if(player == 2) printf("Paper 📄");
        else printf("Scissors ✂");

        printf("\nComputer chose: ");
        if(computer == 1) printf("Rock 🪨");
        else if(computer == 2) printf("Paper 📄");
        else printf("Scissors ✂");

        printf("\n\nResult: ");

        if(player == computer) {
            color(14);
            printf("DRAW!");
            draw++;
        }
        else if((player == 1 && computer == 3) ||
                (player == 2 && computer == 1) ||
                (player == 3 && computer == 2))
        {
            color(10);
            printf("YOU WIN! 😍");
            playerScore++;
        }
        else {
            color(12);
            printf("COMPUTER WINS! 😈");
            compScore++;
        }

        color(14);
        printf("\n\nDo you want to play again? (y/n): ");
        fflush(stdin);
        scanf(" %c", &ch);

        if(ch == 'n' || ch == 'N')
            break;
    }

    system("cls");
    color(11);
    printf("=============== FINAL SCOREBOARD ===============\n\n");
    
    color(10);
    printf("Your Wins:       %d\n", playerScore);
    color(12);
    printf("Computer Wins:   %d\n", compScore);
    color(14);
    printf("Matches Drawn:   %d\n\n", draw);

    color(11);
    printf("================================================\n");
    color(7);
}
 
int main()
{
    system("cls");

    // FIX: srand should be called ONCE
    srand(time(0));

    color(13);
    printf("=== ROCK - PAPER - SCISSORS GAME ===\n");
    printf("Press any key to start...\n");
    getch();

    playGame();

    color(10);
    printf("\nThanks for playing! ❤\n");
    color(7);
    return 0;
}
