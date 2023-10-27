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

// Function to multiply matrix by a random number
void multiplyMatrixByRandomNumber(int matrix[ROWS][COLS], int randomNumber)
{
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] *= randomNumber;
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
    int randomNumber;

    // Generate random matrix
    generateRandomMatrix(matrix);

    // Display the generated matrix
    std::cout << "Matrix: " << std::endl;
    displayMatrix(matrix);

    // Generate random number between 1 and 10
    randomNumber = rand() % 10 + 1;
    std::cout << "Random Number: " << randomNumber << std::endl;

    // Multiply matrix by random number
    multiplyMatrixByRandomNumber(matrix, randomNumber);

    // Display the multiplied matrix
    std::cout << "Multiplied Matrix: " << std::endl;
    displayMatrix(matrix);

    return 0;
}

