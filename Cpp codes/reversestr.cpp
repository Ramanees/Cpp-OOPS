#include <iostream>
#include <string>
using namespace std;
class StringManipulator {
private:
    string str;
public:
    StringManipulator(const string& s) {
        str = s;
    }
    void reverseString() {
        int n = str.length();
        for (int i = 0; i < n / 2; ++i) {
            swap(str[i], str[n - i - 1]);
        }
    }

    void displayString() const {
        cout << "String: " << str << endl;
    }
};

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    StringManipulator sm(input);
    cout << "Original ";
    sm.displayString();
    sm.reverseString();
    cout << "Reversed ";
    sm.displayString();

    return 0;
}
