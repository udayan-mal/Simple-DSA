#include <iostream>
#include <vector>
#include <cmath>  // for abs()

using namespace std;

int findClosestToZero(vector<int>& nums) {
    int closest = nums[0];

    for (int num : nums) {
        if (abs(num) < abs(closest)) {
            closest = num;
        } else if (abs(num) == abs(closest) && num < closest) {
            closest = num; // prefer the smaller (negative) one
        }
    }

    return closest;
}

int main() {
    vector<int> nums = {-4, -2, 1, 4, 8};
    cout << "Closest to Zero: " << findClosestToZero(nums) << endl;

    vector<int> nums2 = {-5, 5};
    cout << "Closest to Zero: " << findClosestToZero(nums2) << endl;

    return 0;
}
