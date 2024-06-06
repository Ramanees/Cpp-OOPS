#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right])
            return false;
        ++left;
        --right;
    }
    return true;
}

int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;

    string concatenated = str1 + str2;

    if (isPalindrome(concatenated))
        cout << "The concatenated string is a palindrome.\n";
    else
        cout << "The concatenated string is not a palindrome.\n";

    return 0;
}

