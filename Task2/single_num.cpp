#include <iostream>
#include <vector>
using namespace std;

int singleNumber(const vector<int>& nums) {
    int result = 0;
    for (int num : nums) {
        result ^= num;  
    }
    return result;
}

int main() {
    vector<int> nums1 = {2, 2, 1};
    cout << "Single number in nums1: " << singleNumber(nums1) << endl;

    vector<int> nums2 = {4, 1, 2, 1, 2};
    cout << "Single number in nums2: " << singleNumber(nums2) << endl;

    vector<int> nums3 = {1};
    cout << "Single number in nums3: " << singleNumber(nums3) << endl;

return 0;
}