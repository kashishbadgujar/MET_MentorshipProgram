//Largest Element in Array

#include <iostream>
using namespace std;

int findLargest(int arr[], int n) {
    int largest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int arr[] = {1, 8, 7, 56, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = findLargest(arr, n);
    cout << "The largest element in the array is: " << largest << endl;
    return 0;
}