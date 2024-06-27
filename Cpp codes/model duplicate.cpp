#include <iostream>

using namespace std;

class RemoveDuplicates {
public:
  RemoveDuplicates(int arr[], int n) {
    this->arr= arr;
    this->n = n;
  }

  int removeDuplicates() {
    int j = 0;
    for (int i = 0; i < n - 1; i++) {
      if (arr[i] != arr[i + 1]) {
        arr[j++] = arr[i];
      }
    }
    arr[j++] = arr[n - 1];
    return j;
  }

private:
  int arr[];
  int n;
};

int main() {
  int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5, 6, 7};
  int n = sizeof(arr) / sizeof(arr[0]);

  RemoveDuplicates removeDuplicates(arr, n);
  int newLength = removeDuplicates.removeDuplicates();

  for (int i = 0; i < newLength; i++) {
    cout << arr[i] << " ";
  }

  cout << endl;

  return 0;
}
