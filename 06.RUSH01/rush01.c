#include <stdio.h>
#include <stdbool.h>

#define N 4  // Grid size (4x4)

// Grid and clues
int grid[N][N];
int rowClues[N][N];  // Clues for rows (top-bottom view)
int colClues[N][N];  // Clues for columns (left-right view)

// Function to check if a number is already in the given row
bool isInRow(int row, int num) {
    for (int col = 0; col < N; col++) {
        if (grid[row][col] == num) {
            return true;
        }
    }
    return false;
}

// Function to check if a number is already in the given column
bool isInCol(int col, int num) {
    for (int row = 0; row < N; row++) {
        if (grid[row][col] == num) {
            return true;
        }
    }
    return false;
}

// Function to check if a number can be placed at grid[r][c]
bool isValid(int r, int c, int num) {
    // Check if num is already in the row or column
    if (isInRow(r, num) || isInCol(c, num)) {
        return false;
    }

    return true;
}

// Function to count visible skyscrapers in a row from left to right
int countVisible(int row[], bool leftToRight) {
    int visible = 0, maxHeight = 0;
    for (int i = 0; i < N; i++) {
        int currentHeight = leftToRight ? row[i] : row[N - i - 1];
        if (currentHeight > maxHeight) {
            visible++;
            maxHeight = currentHeight;
        }
    }
    return visible;
}

// Function to check if the grid satisfies the visibility clues
bool checkVisibility() {
    // Check row visibility (from left to right)
    for (int r = 0; r < N; r++) {
        int visibleFromLeft = countVisible(grid[r], true);
        int visibleFromRight = countVisible(grid[r], false);
        if (visibleFromLeft != rowClues[r][0] || visibleFromRight != rowClues[r][1]) {
            return false;
        }
    }

    // Check column visibility (from top to bottom)
    for (int c = 0; c < N; c++) {
        int col[N];
        for (int r = 0; r < N; r++) {
            col[r] = grid[r][c];
        }
        int visibleFromTop = countVisible(col, true);
        int visibleFromBottom = countVisible(col, false);
        if (visibleFromTop != colClues[c][0] || visibleFromBottom != colClues[c][1]) {
            return false;
        }
    }

    return true;
}

// Backtracking function to solve the puzzle
bool solve(int r, int c) {
    // If we have filled all the rows
    if (r == N) {
        return checkVisibility();
    }

    // If we have filled all columns in the current row, move to the next row
    if (c == N) {
        return solve(r + 1, 0);
    }

    // Try placing every number from 1 to N in the current cell
    for (int num = 1; num <= N; num++) {
        if (isValid(r, c, num)) {
            grid[r][c] = num;

            // If placing num results in a valid configuration, continue to the next cell
            if (solve(r, c + 1)) {
                return true;
            }

            // Backtrack if placing num doesn't lead to a solution
            grid[r][c] = 0;
        }
    }

    // If no number can be placed, return false
    return false;
}

// Function to print the grid
void printGrid() {
    for (int r = 0; r < N; r++) {
        for (int c = 0; c < N; c++) {
            printf("%d ", grid[r][c]);
        }
        printf("\n");
    }
}

int main() {
    // Example Skyscraper Puzzle for a 4x4 grid
    // Row Clues: {top, bottom}
    rowClues[0][0] = 4; rowClues[0][1] = 1;
    rowClues[1][0] = 3; rowClues[1][1] = 2;
    rowClues[2][0] = 2; rowClues[2][1] = 2;
    rowClues[3][0] = 1; rowClues[3][1] = 2;

    // Column Clues: {left, right}
    colClues[0][0] = 4; colClues[0][1] = 1;
    colClues[1][0] = 3; colClues[1][1] = 2;
    colClues[2][0] = 2; colClues[2][1] = 2;
    colClues[3][0] = 1; colClues[3][1] = 2;

    // Initialize grid to zero
    for (int r = 0; r < N; r++) {
        for (int c = 0; c < N; c++) {
            grid[r][c] = 0;
        }
    }

    // Start solving the puzzle
    if (solve(0, 0)) {
        printGrid();
    } else {
        printf("No solution exists.\n");
    }

    return 0;
}

