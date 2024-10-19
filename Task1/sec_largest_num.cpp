//Second largest number in an array

#include <iostream>
#include <vector>
#include<limits.h>
using namespace std;

int findSecondLargest(vector<int> arr) {
    int n = arr.size();

    if (n < 2) {
        return -1;
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() {
    vector<int> arr = {12, 35, 1, 10, 34, 1};

    int secondLargest = findSecondLargest(arr);

    cout << "Second largest element: " << secondLargest << endl;
    return 0;
}