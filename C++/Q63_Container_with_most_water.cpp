#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        // Initialize two pointers: one at the start and one at the end of the array
        int left = 0, right = height.size() - 1;

        // Variable to store the maximum area found so far
        int ans = 0;

        // Continue until the two pointers meet
        while (left < right) {
            // Calculate the area formed by the lines at left and right pointers
            ans = max(ans, min(height[left], height[right]) * (right - left));

            // Move the pointer pointing to the shorter line inward
            // This helps in potentially finding a taller line and a larger area
            if (height[left] > height[right])
                right--;
            else
                left++;

            // Each iteration reduces the width but might increase the height
        }

        // Return the maximum area that can be contained between two lines
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << sol.maxArea(height) << endl; // Expected output: 49
    return 0;
}