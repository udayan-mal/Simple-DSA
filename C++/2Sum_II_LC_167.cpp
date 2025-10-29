// LeetCode -15
// Three sum - Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();

        // Optimal(two pointer) almost by me -> TC: O(N)
        int low = 0;
        int high = n-1;
        
        while (low < high) {
            int sum = numbers[low] + numbers[high];
            if (sum == target) {
                return {low + 1, high + 1};
            }
            else if (sum > target) {
                high--;
            }
            else  {
                low++;
            }
        }
        return {0, 0};


        // Brute: -> TC: O(N^2)
        // for (int i = 0; i<n; i++) {
        //     for (int j = i+1; j<n; j++) {
        //         if (numbers[i] + numbers[j] == target) {
        //             return {i+1, j+1};
        //         }
        //     }
        
        // }
        // return {0, 0};


        // Better (BS) -> TC: O(NlogN)
        // for (int i = 0; i<n-1; i++) {
        //     int curr = numbers[i];
        //     int required = target - curr;
        //     int low = i+1;
        //     int high = n-1;
           
        //     while (low <= high) {
        //         int mid = low + (high - low) / 2;
        //         if (numbers[mid] == required) {
        //             return {i+1, mid+1};
        //         }
        //         else if (numbers[mid] > required) {
        //             high = mid - 1;
        //         }
        //         else {
        //             low = mid + 1;
        //         }
        //     }

        // }

        // return {0, 0};

    }
};