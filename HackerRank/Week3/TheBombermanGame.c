// The Bomberman Game solved using help of internet resources
#include <stdio.h>
#define MAX 200
void printGrid(char grid[MAX][MAX], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%c", grid[i][j]);
        }
        printf("\n");
    }
}
void fillBombs(char grid[MAX][MAX], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            grid[i][j] = 'O';
        }
    }
}
void explode(char grid[MAX][MAX], char result[MAX][MAX], int r, int c) {
    fillBombs(result, r, c);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (grid[i][j] == 'O') {
                result[i][j] = '.';
                if (i > 0) result[i-1][j] = '.';
                if (i < r-1) result[i+1][j] = '.';
                if (j > 0) result[i][j-1] = '.';
                if (j < c-1) result[i][j+1] = '.';
            }
        }
    }
}
int main() {
    int r, c;
    long n;
    scanf("%d %d %ld", &r, &c, &n);
    char grid[MAX][MAX], g3[MAX][MAX], g5[MAX][MAX];
    for (int i = 0; i < r; i++) scanf("%s", grid[i]);
    if (n == 1) printGrid(grid, r, c);
    else if (n % 2 == 0) {
        fillBombs(grid, r, c);
        printGrid(grid, r, c);
    }
    else {
        explode(grid, g3, r, c);
        explode(g3, g5, r, c);
        if ((n - 3) % 4 == 0) printGrid(g3, r, c); 
        else printGrid(g5, r, c);
    }
    return 0;
}
