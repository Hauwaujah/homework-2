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

// Function to divide two matrices and store the result in a third matrix
void divideMatrices(const int matrix1[ROWS][COLS], const int matrix2[ROWS][COLS], double result[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = static_cast<double>(matrix1[i][j]) / matrix2[i][j];
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

// Function to display a double matrix
void displayMatrix(const double matrix[ROWS][COLS])
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
    int matrix1[ROWS][COLS];
    int matrix2[ROWS][COLS];
    double quotient[ROWS][COLS];

    // Generate random matrices
    generateRandomMatrix(matrix1);
    generateRandomMatrix(matrix2);

    // Display the generated matrices
    std::cout << "Matrix 1: " << std::endl;
    displayMatrix(matrix1);
    std::cout << std::endl;

    std::cout << "Matrix 2: " << std::endl;
    displayMatrix(matrix2);
    std::cout << std::endl;

    // Divide the matrices
    divideMatrices(matrix1, matrix2, quotient);

    // Display the quotient matrix
    std::cout << "Quotient of the matrices: " << std::endl;
    displayMatrix(quotient);

    return 0;
}
