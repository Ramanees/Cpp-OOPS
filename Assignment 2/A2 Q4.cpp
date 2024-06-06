#include <iostream>
#include <unordered_map>

using namespace std;

int findMostFrequent(int arr[], int n) {
  unordered_map<int, int> freq;
  int maxCount = 0, res = arr[0];

  for (int i = 0; i < n; i++) {
    freq[arr[i]]++;
    if (freq[arr[i]] > maxCount) {
      maxCount = freq[arr[i]];
      res = arr[i];
    }
  }

  return res;
}

int main() {
  int arr[] = {1, 4, 5, 2, 1, 4, 3, 2};
  int n = sizeof(arr) / sizeof(arr[0]);

  int mostFrequent = findMostFrequent(arr, n);

  cout << "Most frequent element: " << mostFrequent << endl;

  return 0;
}
