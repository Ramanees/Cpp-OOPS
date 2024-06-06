#include <iostream>
using namespace std;

int main() {
    cout << "X\tY\tZ\tXY+Z\n";
    cout << "-------------------\n";
    for (int X = 0; X <= 1; ++X) {
        for (int Y = 0; Y <= 1; ++Y) {
            for (int Z = 0; Z <= 1; ++Z) {
                int result = X * Y + Z;
                cout << X << "\t" << Y << "\t" << Z << "\t" << result << "\n";
            }
        }
    }

    return 0;
}


