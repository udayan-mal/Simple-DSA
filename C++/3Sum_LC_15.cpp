// LeetCode -15
// Three sum - Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n = nums.size();
        if (n < 3) {
            return {}; // Not enough elements for a triplet
        }

        // Brute(TLE):
        // for(int i =0; i<n; i++){
        //     for(int j = i+1; j<n; j++) {
        //         for(int k=j+1; k<n; k++) {
        //             if(nums[i] + nums[j] + nums[k] == 0) {
        //                 vector<int> current_array = {nums[i], nums[j], nums[k]};
        //                 sort(current_array.begin(),current_array.end());
        //                 if(count(ans.begin(),ans.end(),current_array) == 0) {
        //                     ans.push_back(current_array);
        //                 }
        //             }
        //         }
        //     }
        // }


        // Better(TLE - 312/314 passed):
        // sort(nums.begin(), nums.end());
        // set<vector<int>> unique_triplets;
        // for(int i = 0; i<n; i++ ) {
        //     unordered_map<int, int> mp;
        //     for (int j = i+1 ; j < nums.size(); j++) {
        //         int target = -nums[i] - nums[j];
                
        //         if(mp.count(target)) {
        //             vector<int> current_triplet = {nums[i],nums[j],target};
        //             sort(current_triplet.begin(),current_triplet.end());
        //             unique_triplets.insert(current_triplet);
        //         }

        //         mp[nums[j]] = j;
        //     }
        // }

        // vector<vector<int>> ans;
        // for (const auto& triplet : unique_triplets) {
        //     ans.push_back(triplet);
        // }


        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i = 0; i<n; i++) {
            if(i>0 && nums[i] == nums[i-1]) continue; // Skip duplicate for nums[i]
            int j = i+1; 
            int k = n-1; 
            while(j<k) {
                if(nums[i] + nums[j] + nums[k] == 0) {
                    vector<int> temp = {nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++; // Move j forward
                    k--; // Move k backward
                    while(j<k && nums[j] == nums[j-1] ) j++;
                    while(k>j && nums[k] == nums[k+1] ) k--;
                }
                else if(nums[i] + nums[j] + nums[k] > 0) {
                    k--;  // Sum too large, decrease k
                }
                else {
                    j++;  // Sum too small, increase j
                }
            } 
        }


        return ans;
    }
};