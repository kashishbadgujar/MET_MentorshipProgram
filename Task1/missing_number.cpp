//To find missing number in an array

#include <iostream>
#include <vector>
using namespace std;

int missingNumber(const vector<int>& arr) {
    int n = arr.size();
    int totalSum = n * (n + 1) / 2;  // Calculate the expected sum of numbers from 0 to n
    int actualSum = 0;

    // Calculate the sum of elements in the array
    for (int num : arr) {
        actualSum += num;
    }

    // The missing number is the difference between the expected sum and the actual sum
    return totalSum - actualSum;
}

int main() {
    vector<int> arr1 = {3, 0, 1};
    vector<int> arr2 = {0, 1};
    vector<int> arr3 = {9, 6, 4, 2, 3, 5, 7, 0, 1};

    cout << "Missing number in arr1: " << missingNumber(arr1) << endl;
    cout << "Missing number in arr2: " << missingNumber(arr2) << endl;
    cout << "Missing number in arr3: " << missingNumber(arr3) << endl;

    return 0;
}