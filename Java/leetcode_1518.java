// package Simple_DSA.Java;

public class leetcode_1518 {
    public int numWaterBottles(int numBottles, int numExchange) {
        int count=numBottles;
        while(numBottles>=numExchange)
        {
            count+=numBottles/numExchange;
            numBottles=numBottles/numExchange+numBottles%numExchange;
        }
        return count;
    }
    public static void main(String[] args) {
        leetcode_1518 solver = new leetcode_1518();
        
        // Test Case 1: numBottles = 9, numExchange = 3 (Expected: 13)
        int result1 = solver.numWaterBottles(9, 3);
        System.out.println("Test Case 1 (9 bottles, exchange 3): " + result1);
        
        // Test Case 2: numBottles = 15, numExchange = 4 (Expected: 19)
        int result2 = solver.numWaterBottles(15, 4);
        System.out.println("Test Case 2 (15 bottles, exchange 4): " + result2);
    }
}
