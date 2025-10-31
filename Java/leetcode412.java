import java.util.ArrayList;
import java.util.List;

public class leetcode412 {

    public List<String> fizzBuzz(int n) {
        ArrayList<String> ans = new ArrayList<>();
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0)
                ans.add("FizzBuzz");
            else if (i % 3 == 0)
                ans.add("Fizz");
            else if (i % 5 == 0)
                ans.add("Buzz");
            else
                ans.add(Integer.toString(i));
        }
        return ans;
    }

    public static void main(String[] args) {
        leetcode412 obj = new leetcode412();

        // Test Case 1
        int n1 = 3;
        System.out.println("Input: " + n1);
        System.out.println("Output: " + obj.fizzBuzz(n1)); // ["1","2","Fizz"]

        // Test Case 2
        int n2 = 5;
        System.out.println("\nInput: " + n2);
        System.out.println("Output: " + obj.fizzBuzz(n2)); // ["1","2","Fizz","4","Buzz"]

        // Test Case 3
        int n3 = 15;
        System.out.println("\nInput: " + n3);
        System.out.println("Output: " + obj.fizzBuzz(n3)); 
        // ["1","2","Fizz","4","Buzz","Fizz","7","8","Fizz","Buzz","11","Fizz","13","14","FizzBuzz"]
    }
}
