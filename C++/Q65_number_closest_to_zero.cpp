#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int ans = nums[0]; // Start with the first element as the initial answer

        for (int num : nums) {
            // Update if the current number is closer to zero
            if (abs(num) < abs(ans)) 
                ans = num;
            // If both are equally close, prefer the positive number
            else if (abs(num) == abs(ans)) 
                ans = max(ans, num);
        }

        return ans;
    }
};

int main() {
    Solution sol;

    // Example vector of numbers
    vector<int> nums = {-4, -2, 1, 4, 8};

    // Find and print the closest number to zero
    cout << "The number closest to zero is: " << sol.findClosestNumber(nums) << endl;

    return 0;
}