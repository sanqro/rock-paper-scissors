#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player_choice, computer_choice;
    srand(time(0));

    printf("Welcome to Rock-Paper-Scissors!\n");

    do {
        printf("Enter your choice (1 for Rock, 2 for Paper, 3 for Scissors): ");
        scanf("%d", &player_choice);

        computer_choice = rand() % 3 + 1;

        printf("Computer chose: %d.\n", computer_choice);

        if (player_choice == computer_choice) {
            printf("It's a tie!\n");
        } else if ((player_choice == 1 && computer_choice == 3) ||
                   (player_choice == 2 && computer_choice == 1) ||
                   (player_choice == 3 && computer_choice == 2)) {
            printf("You win!\n");
        } else {
            printf("Computer wins!\n");
        }
        
        printf("Do you want to play again? (1 for Yes, 0 for No): ");
        scanf("%d", &player_choice);
    } while (player_choice == 1);

    return 0;
}
