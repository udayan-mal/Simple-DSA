import java.util.*;
public class leetcode442 {

    public List<Integer> findDuplicates(int[] nums) {
        List<Integer> result = new ArrayList<>();
        Arrays.sort(nums); // Sorting the array

        for (int i = 1; i < nums.length; i++) {
            if (nums[i] == nums[i - 1]) {
                // Avoid adding the same duplicate twice
                if (result.isEmpty() || result.get(result.size() - 1) != nums[i]) {
                    result.add(nums[i]);
                }
            }
        }

        return result;
    }

    // Main method to test the solution
    public static void main(String[] args) {
        leetcode442 obj = new leetcode442();

        // Test Case 1
        int[] nums1 = {4, 3, 2, 7, 8, 2, 3, 1};
        System.out.println("Input: " + Arrays.toString(nums1));
        System.out.println("Output: " + obj.findDuplicates(nums1)); // Expected: [2, 3]

        // Test Case 2
        int[] nums2 = {1, 1, 2};
        System.out.println("\nInput: " + Arrays.toString(nums2));
        System.out.println("Output: " + obj.findDuplicates(nums2)); // Expected: [1]

        // Test Case 3
        int[] nums3 = {1};
        System.out.println("\nInput: " + Arrays.toString(nums3));
        System.out.println("Output: " + obj.findDuplicates(nums3)); // Expected: []
    }
}
