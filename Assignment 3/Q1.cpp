#include <iostream>

using namespace std;

int gcd(int a, int b) {

  if (b == 0) {
    return a;
  }

  return gcd(b, a % b);
}

void simplify_fraction(int numerator, int denominator) {

  int gcd_value = gcd(numerator, denominator);

  numerator /= gcd_value;
  denominator /= gcd_value;
n
  cout << "Simplified fraction: " << numerator << "/" << denominator << endl;
}

int main() {
  int numerator, denominator;

  cout << "Enter numerator: ";
  cin >> numerator;
  cout << "Enter denominator: ";
  cin >> denominator;

  if (denominator <= 0) {
    cout << "Error: Denominator must be positive." << endl;
    return 1;
  }

  simplify_fraction(numerator, denominator);

  return 0;
}
