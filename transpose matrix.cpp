#include <iostream>
#include <cstdlib>
#include <ctime>

const int ROWS = 3;
const int COLS = 3;


void generateRandomMatrix(int matrix[ROWS][COLS])
{
    srand(time(0)); // Seed the random number generator

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] = rand() % 100; // Generate a random number between 0 and 99
        }
    }
}

// Function to find the transpose of a matrix
void findTranspose(int matrix[ROWS][COLS], int transposeMatrix[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            transposeMatrix[j][i] = matrix[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(const int matrix[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    int matrix[ROWS][COLS];
    int transposeMatrix[ROWS][COLS];

    // Generate random matrix
    generateRandomMatrix(matrix);

    // Display the generated matrix
    std::cout << "Matrix: " << std::endl;
    displayMatrix(matrix);

    // Calculate the transpose of the matrix
    findTranspose(matrix, transposeMatrix);

    // Display the transpose matrix
    std::cout << "Transpose Matrix: " << std::endl;
    displayMatrix(transposeMatrix);

    return 0;
}

