#ifndef GAMES_H
#define GAMES_H

void display_games_list();
void display_game_info(int game_id);
void get_user_choice();
void display_menu();

#endif // GAMES_H
#include <stdio.h>
#include "games.h"

void display_games_list() {
    printf("\nAvailable Free Games:\n");
    printf("1. Tic-Tac-Toe\n");
    printf("2. Snake\n");
    printf("3. Minesweeper\n");
    printf("4. Pong\n");
}

void display_game_info(int game_id) {
    switch (game_id) {
        case 1:
            printf("Game: Tic-Tac-Toe\n");
            printf("Description: A classic two-player game where players take turns marking Xs and Os in a 3x3 grid.\n");
            break;
        case 2:
            printf("Game: Snake\n");
            printf("Description: Control a snake to eat food and grow longer without running into itself or the walls.\n");
            break;
        case 3:
            printf("Game: Minesweeper\n");
            printf("Description: Clear a grid of mines by revealing squares based on the number of adjacent mines.\n");
            break;
        case 4:
            printf("Game: Pong\n");
            printf("Description: A table tennis-themed arcade game featuring simple two-dimensional graphics.\n");
            break;
        default:
            printf("Invalid game ID.\n");
            break;
    }
}

void display_menu() {
    printf("\nMenu:\n");
    printf("1. View Games List\n");
    printf("2. Select Game by ID\n");
    printf("3. Exit\n");
    printf("Please enter your choice: ");
}

void get_user_choice() {
    int choice;
    int game_id;

    while (1) {
        display_menu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                display_games_list();
                break;
            case 2:
                printf("Enter game ID to view more information: ");
                scanf("%d", &game_id);
                display_game_info(game_id);
                break;
            case 3:
                printf("Exiting the program. Goodbye!\n");
                return;
            default:
                printf("Invalid choice, please try again.\n");
        }
    }
}

int main() {
    printf("Welcome to the Free Games Directory!\n");
    get_user_choice();
    return 0;
}
