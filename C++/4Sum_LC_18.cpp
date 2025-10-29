// LeetCode -18
// Four sum - Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b],   nums[c], nums[d]] such that: 0 <= a, b, c,
//  d < n a, b, c, and d are distinct.
// nums[a] + nums[b] + nums[c] + nums[d] == target
// You may return the answer in any order.


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();

        // Brute(TLE on 288/294) :
        // for (int i = 0; i < n; i++) {

        //     for (int j = i + 1; j < n; j++) {

        //         for (int k = j + 1; k < n; k++) {

        //             for (int l = k + 1; l < n; l++) {

        //                 long long sum = static_cast<long long>(nums[i]) +
        //                 nums[j] + nums[k] + nums[l]; if (sum == target) {
        //                     vector<int> temp = {nums[i], nums[j], nums[k],
        //                                         nums[l]};
        //                     sort(temp.begin(), temp.end());
        //                     if (count(ans.begin(), ans.end(), temp) == 0) {
        //                         ans.push_back(temp);
        //                     }
        //                 }
        //             }
        //         }
        //     }
        // }


        // Better (TC really fkin bad , beats 5.01% , 1748ms !!, and SC ofc...)
        // sort(nums.begin(), nums.end());
        // set<vector<int>> unique_quadruplets;
        // for (int i = 0; i < n; i++) {

        //     for (int j = i + 1; j < n; j++) {
        //         unordered_map<long long, int> hash;
        //         for (int k = j + 1; k < n; k++) {
        //             long long required =
        //                 static_cast<long long>(target) -
        //                 (static_cast<long long>(nums[i]) + nums[j] + nums[k]);
        //             if (hash.count(required)) {

        //                 vector<int> current_quadruplets = {
        //                     nums[i], nums[j], nums[k], int(required)};
        //                 sort(current_quadruplets.begin(),
        //                      current_quadruplets.end());
        //                 unique_quadruplets.insert(current_quadruplets);
        //             }
        //             hash[static_cast<long long>(nums[k])] = k;
        //         }
        //     }
        // }

        // vector<vector<int>> ans;
        // for (const auto& quadruplet : unique_quadruplets) {
        //     ans.push_back(quadruplet);
        // }


        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0; i<n; i++) {
            if(i>0 && nums[i] == nums[i-1]) continue;
            for(int j=i+1; j<n; j++) {
                if(j>i+1 && nums[j] == nums[j-1]) continue;
                int left = j+1;
                int right = n-1;
                while(left < right) {
                    long long sum = static_cast<long long>(nums[i]) + nums[j] + nums[left] + nums[right];
                    if(sum == target) {
                        vector<int> temp = {nums[i],nums[j],nums[left],nums[right]};
                        ans.push_back(temp);
                        left++;
                        right--;
                        while(left<right && nums[left] == nums[left-1] ) left++;
                        while(right>left && nums[right] == nums[right+1] ) right--;
                    }
                    else if (sum > target) right--;
                    else {
                        left++;
                    }
                }
            }
        }        
        

        return ans;
    }
};