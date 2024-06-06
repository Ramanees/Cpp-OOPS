#include <iostream>

using namespace std;

int main() {
  int n, t1 = 0, t2 = 1, nextTerm;

  cout << "Enter a positive integer (less than 40): ";
  cin >> n;

  if (n < 0) {
    cerr << "Error: N cannot be negative." << endl;
    return 1;
  }

  if (n == 0) {
    cout << "Nth Fibonacci Number (n = 0) is: " << t1 << endl;
  } else if (n == 1) {
    cout << "Nth Fibonacci Number (n = 1) is: " << t2 << endl;
  } else {
    if (n == 2) {
      nextTerm = t1 + t2;
      cout << "Nth Fibonacci Number (n = 2) is: " << nextTerm << endl;
    } else if (n == 3) {
      nextTerm = t1 + t2;
      cout << "Nth Fibonacci Number (n = 3) is: " << nextTerm << endl;
    } else if (n == 4) {
      nextTerm = t1 + t2;
      cout << "Nth Fibonacci Number (n = 4) is: " << nextTerm << endl;
    } else {
      cerr << "Warning: N is too large for this method. Consider using recursion or iteration." << endl;
    }
  }

  return 0;
}
