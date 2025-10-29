/**
 *  * Title: 1838. Frequency of the Most Frequent Element [LeetCode]
 *  *
 *  * Problem Link: https://leetcode.com/problems/frequency-of-the-most-frequent-element/
 *  *
 *  * Description:
 *  * Given an array nums and an integer k,
 *  * you can increment elements by 1 up to k times total.
 *  * Return the maximum possible frequency of any element.
 *  *
 *  * Approach:
 *  * - Sort the array in ascending order.
 *  * - Use sliding window technique.
 *  * - Maintain current window sum and compute cost:
 *  *   cost = (window_size * nums[r]) - window_sum.
 *  * - If cost > k, shrink window from left.
 *  * - Track maximum window size as max frequency.
 *  *
 *  * Example 1:
 *  * Input: nums = [1,2,4], k = 5
 *  * Output: 3
 *  * Explanation: Make all elements equal to 4 using 5 operations.
 *  *
 *  * Example 2:
 *  * Input: nums = [1,4,8,13], k = 5
 *  * Output: 2
 *  * Explanation: Only two elements can be made equal.
 *  *
 *  * Example 3:
 *  * Input: nums = [3,9,6], k = 2
 *  * Output: 1
 *  *
 *  * -----------------------------------------------------------
 *  * Time Complexity: O(n log n) — due to sorting.
 *  * Space Complexity: O(1) — constant extra space.
 *  * -----------------------------------------------------------
 */
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        // sort the array to use a sliding window
        sort(nums.begin(), nums.end());

        int l = 0;
        int maxF = 0;
        long long sum = 0;

        for (int r = 0; r < nums.size(); ++r) {
            sum += nums[r];

            long long size = r - l + 1;
            long long cost = (size * nums[r]) - sum;

            // shhrink window if cost is too high
            while (cost > k) {
                sum -= nums[l];
                l++;
                // recalculate cost & size for the new window
                size = r - l + 1;
                cost = (size * nums[r]) - sum;
            }

            maxF = max(maxF, (int)size);
        }

        return maxF;
    }
};