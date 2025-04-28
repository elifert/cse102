#include <stdio.h>
#include <time.h>

int main() {
    srand(time(NULL));
    FILE *game_state;
    int width, height;
    int playerX, playerY;
    int doorX, doorY;
    char move;
    /* initial run */
    game_state = fopen("game_state.txt", "r"); /* if the file exists read from it & write game states each run. */
    if (game_state == NULL) { /* if file does not exist create a new one */
        printf("Generating a new board...\n");
        printf("Enter the width and height of board:\n");
        scanf("%d %d", &width, &height);
        if (width <= 0 || height <= 0) {
            printf("Width or height should be positive numbers. Please enter valid width and height.\n");
            return 3;
        }
        game_state = fopen("game_state.txt", "w");
        if (game_state == NULL) {
            printf("Some error occured while creating the file.\nExiting the game.");
            return 2;
        }
        playerX = rand() % width; 
        playerY = rand() % height;
        doorX = rand() % width;
        doorY = rand() % height;
        fprintf(game_state, "%d %d %d %d %d %d ", width, height, playerX, playerY, doorX, doorY);
        fclose(game_state);
    }
    else {
        fscanf(game_state, "%d %d %d %d %d %d", &width, &height, &playerX, &playerY, &doorX, &doorY);
        fclose(game_state);
    }
    game_state = fopen("game_state.txt", "w");
    if (game_state == NULL) {
        printf("Some error occured while opening the file.\nExiting the game.");
        return 2;
    }
    printf("Width: %d, Height: %d, Player: (%d, %d), Door: (%d,%d)\n", width, height, playerX, playerY, doorX, doorY);

    /* a small chance but sometimes generated coordinates of door and player may be the same. */
    if (playerX == doorX && playerY == doorY) {
        printf("Congratulations! You escaped!\nGenerating a new board...\n");
        printf("Enter the width and height of board:\n");
        scanf(" %d %d", &width, &height);
        if (width <= 0 || height <= 0) {
            printf("Width or height should be positive numbers. Please enter valid width and height.\n");
            remove("game_state.txt");
            return 3;
        }
        game_state = fopen("game_state.txt", "w");
        if (game_state == NULL) {
            printf("Some error occured while creating the file.\nExiting the game.");
            return 2;
        }
        playerX = rand() % width; 
        playerY = rand() % height;
        doorX = rand() % width;
        doorY = rand() % height;
        fprintf(game_state, "%d %d %d %d %d %d ", width, height, playerX, playerY, doorX, doorY);
        fclose(game_state);
        return 0;
    }
    
    printf("Enter move (WASD): ");
    scanf(" %c", &move);    
    if (move == 'W' || move == 'w') {
        playerY = playerY + 1;
        if (playerY < 0 || playerY > height - 1) {
            printf("You hit a wall!\n");
            playerY = playerY - 1;
        }
        else {
            printf("Player moves up to (%d, %d)\n", playerX, playerY);
        }
    }
    else if (move == 'A' || move == 'a') {
        playerX = playerX - 1;
        if (playerX < 0 || playerX > height - 1) {
            printf("You hit a wall!\n");
            playerX = playerX + 1;
        }
        else {
            printf("Player moves left to (%d, %d)\n", playerX, playerY);
        }
    }
    else if (move == 'S' || move == 's') {
        playerY = playerY - 1;
        if (playerY < 0 || playerY > height - 1) {
            printf("You hit a wall!\n");
            playerY = playerY + 1;
        }
        else {
            printf("Player moves down to (%d, %d)\n", playerX, playerY);
        }
    }
    else if (move == 'D' || move == 'd') {
        playerX = playerX + 1;
        if (playerX < 0 || playerX > height - 1) {
            printf("You hit a wall!\n");
            playerX = playerX - 1;
        }
        else {
            printf("Player moves right to (%d, %d)\n", playerX, playerY);
        }
    }
    else {
        printf("Please enter a valid move. (W, A, S, D)\n");
    }

    fprintf(game_state, "%d %d %d %d %d %d ", width, height, playerX, playerY, doorX, doorY);
    fclose(game_state);

    if (playerX == doorX && playerY == doorY) {
        printf("Congratulations! You escaped!\nGenerating a new board...\n");
        printf("Enter the width and height of board:\n");
        scanf(" %d %d", &width, &height);
        if (width <= 0 || height <= 0) {
            printf("Width or height should be positive numbers. Please enter valid width and height.\n");
            remove("game_state.txt");
            return 3;
        }
        game_state = fopen("game_state.txt", "w");
        if (game_state == NULL) {
            printf("Some error occured while creating the file.\nExiting the game.");
            return 2;
        }
        playerX = rand() % width; 
        playerY = rand() % height;
        doorX = rand() % width;
        doorY = rand() % height;
        fprintf(game_state, "%d %d %d %d %d %d ", width, height, playerX, playerY, doorX, doorY);
        fclose(game_state);
        return 0;
    }

    printf("Game continues...\n");
    return 0;
}