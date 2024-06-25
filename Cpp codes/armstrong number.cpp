#include <iostream>
#include <cmath>
using namespace std;

class Armstrong {
private:
    int number;

    int countDigits(int num) {
        int count = 0;
        while (num != 0) {
            num /= 10;
            count++;
        }
        return count;
    }

    bool isArmstrong(int num) {
        int originalNum = num;
        int sum = 0;
        int numDigits = countDigits(num);

        while (num != 0) {
            int digit = num % 10;
            sum += pow(digit, numDigits);
            num /= 10;
        }
        return sum == originalNum;
    }
public:
    Armstrong(int num) : number(num) {}

    void checkArmstrong() {
        if (isArmstrong(number)) {
            cout << number << " is an Armstrong number." << endl;
        } else {
            cout << number << " is not an Armstrong number." << endl;
        }
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    Armstrong armstrong(num);
    armstrong.checkArmstrong();

}