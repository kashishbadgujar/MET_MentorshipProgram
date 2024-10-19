//To check if array is sorted and rotated 

#include <iostream>
#include <vector>
using namespace std;

bool isSortedAndRotated(const vector<int>& arr) {
    int countBreaks = 0;
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        
        if (arr[i] > arr[(i + 1) % n]) {
            countBreaks++;
        }

        if (countBreaks > 1) {
            return false;
        }
    }

    return true;
}

int main() {
    vector<int> arr1 = {3, 4, 5, 1, 2};
    vector<int> arr2 = {2, 1, 3, 4};
    vector<int> arr3 = {1, 2, 3};

    cout << "Is arr1 sorted and rotated? " << (isSortedAndRotated(arr1) ? "True" : "False") << endl;
    cout << "Is arr2 sorted and rotated? " << (isSortedAndRotated(arr2) ? "True" : "False") << endl;
    cout << "Is arr3 sorted and rotated? " << (isSortedAndRotated(arr3) ? "True" : "False") << endl;
    return 0;
}
