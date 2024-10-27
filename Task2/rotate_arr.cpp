#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n; 
    if (k == 0) return;

    vector<int> temp(n);
    
    for (int i = 0; i < n; ++i) {
        temp[(i + k) % n] = nums[i];
    }

    nums = temp;
}

int main() {
    
    vector<int> nums1 = {1, 2, 3, 4, 5, 6, 7};
    int k1 = 3;
    rotate(nums1, k1);
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> nums2 = {-1, -100, 3, 99};
    int k2 = 2;
    rotate(nums2, k2);
    for (int num : nums2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
