// Remove duplicates from sorted array 
#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& arr) {
    if (arr.empty()) return 0; 

    int k = 1; 

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] != arr[i - 1]) { 
            arr[k] = arr[i];
            k++; 
        }
    }
    return k;  
}

int main() {
    vector<int> arr1 = {1, 1, 2};
    vector<int> arr2 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    int k1 = removeDuplicates(arr1);
    int k2 = removeDuplicates(arr2);

    cout << "k1 = " << k1 << ", arr1 = [";
    for (int i = 0; i < k1; i++) {
        cout << arr1[i] << (i < k1 - 1 ? ", " : "");
    }
    cout << "]" << endl;

    cout << "k2 = " << k2 << ", arr2 = [";
    for (int i = 0; i < k2; i++) {
        cout << arr2[i] << (i < k2 - 1 ? ", " : "");
    }
    cout << "]" << endl;
    return 0;
}