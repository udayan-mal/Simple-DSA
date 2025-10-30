/**
 * Program to Make a Simple Calculator Using switch...case
 * Question 31 from Simple-DSA
 * 
 * This program implements a basic calculator that can perform:
 * - Addition (+)
 * - Subtraction (-)
 * - Multiplication (*)
 * - Division (/)
 * - Modulus (%)
 */
public class Q31_SimpleCalculator {
    public static double calculate(double num1, double num2, char operator) {
        double result = 0;
        
        switch (operator) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                } else {
                    throw new ArithmeticException("Division by zero is not allowed");
                }
                break;
            case '%':
                if (num2 != 0) {
                    result = num1 % num2;
                } else {
                    throw new ArithmeticException("Modulus by zero is not allowed");
                }
                break;
            default:
                throw new IllegalArgumentException("Invalid operator. Supported operators are: +, -, *, /, %");
        }
        
        return result;
    }

    public static void main(String[] args) {
        // Test cases
        double[][] numbers = {
            {10, 5},
            {20, 4},
            {15, 3},
            {100, 10},
            {7, 2}
        };
        
        char[] operators = {'+', '-', '*', '/', '%'};
        
        // Run test cases
        for (double[] nums : numbers) {
            for (char op : operators) {
                try {
                    double result = calculate(nums[0], nums[1], op);
                    System.out.printf("%.2f %c %.2f = %.2f%n", nums[0], op, nums[1], result);
                } catch (Exception e) {
                    System.out.println("Error: " + e.getMessage());
                }
            }
            System.out.println("-----------------");
        }
    }
}
