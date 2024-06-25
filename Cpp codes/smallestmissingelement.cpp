#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 2, 6, 9, 11, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    int missing = 0;
    int i = 0;
    
    while (i < size) {
        
        if (arr[i] == missing) {
            ++missing;
        } else if (arr[i] > missing) {
           
            break;
        }
        ++i;
    }

    cout << "The smallest missing element is " << missing;

    return 0;
}
