#include <iostream>
using namespace std;
int setNthBit(int num, int n) {
  if (n < 0) {
    cerr << "Error: Bit position cannot be negative." << endl;
    return num;
  }
  int mask = 1 << n;
  if (num & mask) {
    return num;
  } else {

    return num | mask;
  }
}

int main() {
  int number, bit;
  cout << "Enter a number: ";
  cin >> number;
  cout << "Enter the bit position (starting from 0): ";
  cin >> bit;
  int result = setNthBit(number, bit);
  cout << "Number after setting " << bit << "th bit: " << result << endl;
  return 0;
}
