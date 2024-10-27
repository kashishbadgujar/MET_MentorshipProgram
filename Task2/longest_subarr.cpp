#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int longestSubarrayWithSumK(const vector<int>& arr, int k) {
    unordered_map<int, int> prefix_sum_map;
    int current_sum = 0;
    int max_length = 0;

    for (int i = 0; i < arr.size(); i++) {
        current_sum += arr[i];

        
        if (current_sum == k) {
            max_length = i + 1;
        }

        
        if (prefix_sum_map.find(current_sum - k) != prefix_sum_map.end()) {
            max_length = max(max_length, i - prefix_sum_map[current_sum - k]);
        }

        
        if (prefix_sum_map.find(current_sum) == prefix_sum_map.end()) {
            prefix_sum_map[current_sum] = i;
        }
    }

    return max_length;
}

int main() {
    vector<int> arr1 = {10, 5, 2, 7, 1, 9};
    int k1 = 15;
    cout << "Length of longest subarray with sum " << k1 << ": " << longestSubarrayWithSumK(arr1, k1) << endl;

    vector<int> arr2 = {-1, 2, 3};
    int k2 = 6;
    cout << "Length of longest subarray with sum " << k2 << ": " << longestSubarrayWithSumK(arr2, k2) << endl;

return 0;
}