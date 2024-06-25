#include <iostream>

int main() {
    int rows;

    std::cout << "Enter the number of rows for Pascal's Triangle: ";
    std::cin >> rows;

    for (int i = 0; i < rows; ++i) {
        int coefficient = 1;

        for (int space = 1; space <= rows - i; ++space) {
            std::cout << "  ";
        }

        for (int j = 0; j <= i; ++j) {
            std::cout << coefficient << "   ";
            coefficient = coefficient * (i - j) / (j + 1);
        }
        std::cout << std::endl;
    }

    return 0;
}

