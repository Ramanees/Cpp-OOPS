#include <iostream>
using namespace std;
class PerfectNumber {
public:
    bool isPerfect(int number) {
        if (number <= 1) {
            return false;
        }
        int sum = 1; 
        for (int i = 2; i <= number / 2; ++i) {
            if (number % i == 0) {
                sum += i;
            }
        }
        return sum == number;
    }
    void displayPerfectNumbers(int limit) {
        cout << "Perfect numbers up to " << limit << " are: ";
        for (int i = 1; i <= limit; ++i) {
            if (isPerfect(i)) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
};
int main() {
    PerfectNumber pn;
    int limit;
    cout << "Enter the limit up to which you want to find perfect numbers: ";
    cin >> limit;
    pn.displayPerfectNumbers(limit);
    return 0;
}

