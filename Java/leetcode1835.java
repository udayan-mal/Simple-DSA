// package Simple-DSA.Java;

public class leetcode1835 {
     public int getXORSum(int[] arr1, int[] arr2) {
        int xor1 = arr1[0], xor2 = arr2[0];

        // Compute XOR of arr1
        for (int i = 1; i < arr1.length; i++)
            xor1 = xor1 ^ arr1[i];

        // Compute XOR of arr2
        for (int i = 1; i < arr2.length; i++)
            xor2 = xor2 ^ arr2[i];

        // Final result
        return xor1 & xor2;
    }

    // Main method for testing
    public static void main(String[] args) {
        leetcode1835 obj = new leetcode1835();

        // Test Case 1
        int[] arr1_1 = {1, 2, 3};
        int[] arr2_1 = {6, 5};
        System.out.println("Input: arr1 = [1, 2, 3], arr2 = [6, 5]");
        System.out.println("Output: " + obj.getXORSum(arr1_1, arr2_1)); // Expected: 0

        // Test Case 2
        int[] arr1_2 = {12};
        int[] arr2_2 = {4};
        System.out.println("\nInput: arr1 = [12], arr2 = [4]");
        System.out.println("Output: " + obj.getXORSum(arr1_2, arr2_2)); // Expected: 4

        // Test Case 3
        int[] arr1_3 = {5, 1, 7};
        int[] arr2_3 = {3, 9};
        System.out.println("\nInput: arr1 = [5, 1, 7], arr2 = [3, 9]");
        System.out.println("Output: " + obj.getXORSum(arr1_3, arr2_3));
    }
}
