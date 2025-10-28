/*
* Fibonacci Number Program from LeetCode
* Problem URL: https://leetcode.com/problems/fibonacci-number/
*/

class Solution {
public:
    /*int fib(int n) {
        if (n==0) return 0;
        if(n==1) return 1;
        return (fib (n-1) + fib (n-2));

    }*/ //Taking more than 12 ms i.e more Time Complexity

    //Hence trying another approach
    
    int fib(int n) {
        // defining bases cases
        if (n == 0) return 0;
        if (n == 1) return 1;
        
        int a = 0; // Represents fib(n-2)
        int b = 1; // Represents fib(n-1)
        int c;     // Will hold fib(n)
        
        // Loop from 2 up to n
        for (int i = 2; i <= n; i++) {
            // c is the new fibonacci number
            c = a + b;
            
            // Shift the numbers for the next iteration
            a = b;
            b = c;
        }
        
        // b holds the final F(n)
        return b;
};