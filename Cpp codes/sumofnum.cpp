#include <iostream>
#include <vector>
using namespace std;
class NumberSummer {
private:
    vector<int> numbers;
public:

    void addNumber(int num) {
        numbers.push_back(num);
    }

    int calculateSum() const {
        int sum = 0;
        for (int num : numbers) {
            sum += num;
        }
        return sum;
    }

    void displayNumbers() const {
        cout << "Numbers: ";
        for (int num : numbers) {
            cout << num << " ";
        }
        cout << endl;
    }
};

int main() {
    NumberSummer ns;
    int number;
    char choice;

    do {
        cout << "Enter a number: ";
        cin >> number;
        ns.addNumber(number);

        cout << "Do you want to add another number? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    ns.displayNumbers();
    int sum = ns.calculateSum();
    cout << "Sum of the numbers: " << sum << endl;

    return 0;
}
