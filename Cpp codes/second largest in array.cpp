#include <iostream>
#include <climits>
int main() {
    const int maxSize = 100; 
    int arr[maxSize];
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    if (secondLargest != INT_MIN) {
        std::cout << "The second largest element in the array is: " << secondLargest << std::endl;
    } else {
        std::cout << "There is no second largest element in the array." << std::endl;
    }

    return 0;
}

