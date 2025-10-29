/*
    Solution for Problem 560- Subarray Sum Equals K
    Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

    A subarray is a contiguous non-empty sequence of elements within an array.
    Example 1:

    Input: nums = [1,1,1], k = 2
    Output: 2
    Example 2:

    Input: nums = [1,2,3], k = 3
    Output: 2

    by regenpalkar28
*/
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int currentsum = 0;
        int count = 0;
        unordered_map<int, int> hash;
        hash[0] = 1;
        for(int i=0; i<n; i++) {
            currentsum+= nums[i];
            if(hash.count(currentsum-k)) {
                count+= hash[currentsum-k];
            }
            hash[currentsum]++;
        }
    return count;
    }
};