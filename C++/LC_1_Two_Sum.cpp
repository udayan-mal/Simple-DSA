// LeetCode -1
// Two sum - Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<int> ans;
        //  Brute:
        //   for (int i=0;i<nums.size();i++) {
        //       int sum=0;
        //       for (int j=i+1;j<nums.size();j++) {
        //           sum = nums[i] + nums[j];
        //           if(sum == target) {
        //               ans.push_back(i);
        //               ans.push_back(j);
        //               break;
        //           }
        //       }
        //   }

        // optimal:
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp.emplace(nums[i], i);
            if (mp.find(target - nums[i]) != mp.end() &&
                mp[target - nums[i]] != i) {
                return {i, mp[target - nums[i]]};
                break;
            }
        }

        return {};
    }
};