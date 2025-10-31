// package Simple-DSA.Java;

import java.util.Arrays;

class leetcode75 {
    public void sortColors(int[] nums) {
        Arrays.sort(nums);
    }

    public static void main(String[] args) {
        leetcode75 sol = new leetcode75();

        // Example 1
        int[] nums1 = {2, 0, 2, 1, 1, 0};
        sol.sortColors(nums1);
        System.out.println("Sorted Example 1: " + Arrays.toString(nums1));

        // Example 2
        int[] nums2 = {2, 0, 1};
        sol.sortColors(nums2);
        System.out.println("Sorted Example 2: " + Arrays.toString(nums2));

        // Example 3
        int[] nums3 = {0, 1, 2, 0, 1, 2};
        sol.sortColors(nums3);
        System.out.println("Sorted Example 3: " + Arrays.toString(nums3));
    }
}
