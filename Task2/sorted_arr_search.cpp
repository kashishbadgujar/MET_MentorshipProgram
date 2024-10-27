#include <iostream>
#include <vector>
using namespace std;

bool binarySearch(const vector<int>& arr, int k) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; 

        if (arr[mid] == k) {
            return true;  
        } else if (arr[mid] < k) {
            low = mid + 1; 
        } else {
            high = mid - 1; 
        }
    }

    return false; 
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 6};
    int k1 = 6;
    cout << "Is " << k1 << " present in arr1? " << (binarySearch(arr1, k1) ? "true" : "false") << endl;

    vector<int> arr2 = {1, 2, 4, 5, 6};
    int k2 = 3;
    cout << "Is " << k2 << " present in arr2? " << (binarySearch(arr2, k2) ? "true" : "false") << endl;
return 0;
}