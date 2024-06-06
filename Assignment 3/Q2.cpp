#include <iostream>
#include <random>

bool is_palindrome(int num) {
  int reversed = 0, remainder, original_num = num;

  // Handle negative numbers (palindromes can't be negative)
  if (num < 0) {
    return false;
  }

  // Reverse the number
  while (num != 0) {
    remainder = num % 10;
    reversed = reversed * 10 + remainder;
    num /= 10;
  }

  // Check if reversed number is equal to original number
  return original_num == reversed;
}

int main() {
  int num, random_digit;
  std::random_device rd;  // Seed for random number generation
  std::mt19937 generator(rd());
  std::uniform_int_distribution<int> distribution(0, 9);  // Range for random digit (0-9)

  std::cout << "Enter a number: ";
  std::cin >> num;

  while (!is_palindrome(num)) {
    // Generate random digit
    random_digit = distribution(generator);

    // Append the random digit to the number
    num = num * 10 + random_digit;

    std::cout << "Number is not a palindrome. Appending random digit "
              << random_digit << ". New number: " << num << std::endl;
  }

  std::cout << num << " is a palindrome." << std::endl;

  return 0;
}
