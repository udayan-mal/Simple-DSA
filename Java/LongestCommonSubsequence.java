/**
 * Dynamic Programming Solution for Longest Common Subsequence
 * Problem: Given two sequences, find the length of longest subsequence present in both of them.
 * A subsequence is a sequence that appears in the same relative order, but not necessarily contiguous.
 * 
 * Example:
 * LCS for input Sequences "ABCDGH" and "AEDFHR" is "ADH" of length 3.
 * LCS for input Sequences "AGGTAB" and "GXTXAYB" is "GTAB" of length 4.
 */

public class LongestCommonSubsequence {
    
    /**
     * Returns length of LCS for X[0..m-1], Y[0..n-1] using dynamic programming
     * Time Complexity: O(mn)
     * Space Complexity: O(mn)
     */
    public static int lcs(String X, String Y) {
        int m = X.length();
        int n = Y.length();
        int[][] L = new int[m + 1][n + 1];

        // Build L[m+1][n+1] in bottom up fashion
        for (int i = 0; i <= m; i++) {
            for (int j = 0; j <= n; j++) {
                if (i == 0 || j == 0)
                    L[i][j] = 0;
                else if (X.charAt(i - 1) == Y.charAt(j - 1))
                    L[i][j] = L[i - 1][j - 1] + 1;
                else
                    L[i][j] = Math.max(L[i - 1][j], L[i][j - 1]);
            }
        }
        return L[m][n];
    }

    /**
     * Returns the actual Longest Common Subsequence
     */
    public static String printLCS(String X, String Y) {
        int m = X.length();
        int n = Y.length();
        int[][] L = new int[m + 1][n + 1];

        // Build L[m+1][n+1] in bottom up fashion
        for (int i = 0; i <= m; i++) {
            for (int j = 0; j <= n; j++) {
                if (i == 0 || j == 0)
                    L[i][j] = 0;
                else if (X.charAt(i - 1) == Y.charAt(j - 1))
                    L[i][j] = L[i - 1][j - 1] + 1;
                else
                    L[i][j] = Math.max(L[i - 1][j], L[i][j - 1]);
            }
        }

        // Following code is used to print LCS
        StringBuilder lcs = new StringBuilder();
        int i = m, j = n;
        while (i > 0 && j > 0) {
            // If current characters in X and Y are same, then
            // current character is part of LCS
            if (X.charAt(i - 1) == Y.charAt(j - 1)) {
                lcs.insert(0, X.charAt(i - 1));
                i--;
                j--;
            }
            // If not same, then find the larger of two and
            // go in the direction of larger value
            else if (L[i - 1][j] > L[i][j - 1])
                i--;
            else
                j--;
        }
        return lcs.toString();
    }

    /**
     * Space optimized implementation of LCS
     * Time Complexity: O(mn)
     * Space Complexity: O(n)
     */
    public static int lcsSpaceOptimized(String X, String Y) {
        int m = X.length();
        int n = Y.length();
        int[] L = new int[n + 1];

        // Previous row of dp table
        int[] prev = new int[n + 1];

        // Fill L[] using the recursive formula
        for (int i = 0; i <= m; i++) {
            for (int j = 0; j <= n; j++) {
                if (i == 0 || j == 0)
                    L[j] = 0;
                else if (X.charAt(i - 1) == Y.charAt(j - 1))
                    L[j] = prev[j - 1] + 1;
                else
                    L[j] = Math.max(L[j - 1], prev[j]);
            }
            // Copy current row to prev row
            System.arraycopy(L, 0, prev, 0, n + 1);
        }
        return L[n];
    }

    public static void main(String[] args) {
        // Test cases
        String[][] testCases = {
            {"ABCDGH", "AEDFHR"},      // Expected LCS: "ADH" (length 3)
            {"AGGTAB", "GXTXAYB"},     // Expected LCS: "GTAB" (length 4)
            {"HELLO", "WORLD"},         // Expected LCS: "LO" (length 2)
            {"HUMAN", "CHIMPANZEE"},    // Expected LCS: "HAN" (length 3)
            {"", "ABC"},                // Empty string test
            {"ABC", "ABC"},             // Identical strings
            {"ABC", "CBA"}              // No common subsequence except single chars
        };

        // Test all cases
        for (String[] test : testCases) {
            String X = test[0];
            String Y = test[1];
            
            System.out.println("\nString 1: " + X);
            System.out.println("String 2: " + Y);
            
            // Test regular LCS
            int lcsLength = lcs(X, Y);
            System.out.println("Length of LCS: " + lcsLength);
            
            // Print the actual LCS
            String lcsString = printLCS(X, Y);
            System.out.println("LCS: " + lcsString);
            
            // Test space optimized version
            int lcsLengthOptimized = lcsSpaceOptimized(X, Y);
            System.out.println("Length of LCS (Space Optimized): " + lcsLengthOptimized);
            
            // Verify both implementations give same result
            if (lcsLength != lcsLengthOptimized) {
                System.out.println("ERROR: Different results from two implementations!");
            }
        }
    }
}
