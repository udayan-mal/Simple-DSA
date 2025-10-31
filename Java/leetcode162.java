// package Simple-DSA.Java;

import java.util.Arrays;

class leetcode162 {
    public int findPeakElement(int[] nums) {
        if(nums.length == 1) return 0;
        if(nums[0] > nums[1]) return 0;
        for(int i = 1; i < nums.length - 1; i++) {
            if(nums[i] > nums[i+1] && nums[i] > nums[i-1]) return i;
        }
        return nums.length - 1;
    }

    public static void main(String[] args) {
        leetcode162 sol = new leetcode162();

        int[] nums1 = {1, 2, 3, 1};
        int peak1 = sol.findPeakElement(nums1);
        System.out.println("Peak index in " + Arrays.toString(nums1) + " is: " + peak1);

        int[] nums2 = {1, 2, 1, 3, 5, 6, 4};
        int peak2 = sol.findPeakElement(nums2);
        System.out.println("Peak index in " + Arrays.toString(nums2) + " is: " + peak2);

        int[] nums3 = {1};
        int peak3 = sol.findPeakElement(nums3);
        System.out.println("Peak index in " + Arrays.toString(nums3) + " is: " + peak3);
    }
}

