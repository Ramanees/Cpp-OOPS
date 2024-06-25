#include <iostream>

class Factorial {
public:

    int calculate(int n) {
        if (n < 0) {
            std::cerr << "Factorial is not defined for negative numbers." << std::endl;
            return -1;
        }
        return factorial(n);
    }

private:
 .
    int factorial(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }
        return n * factorial(n - 1);
    }
};

int main() {
    Factorial fact;
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    int result = fact.calculate(number);
    if (result != -1) {
        std::cout << "Factorial of " << number << " is " << result << std::endl;
    }

}