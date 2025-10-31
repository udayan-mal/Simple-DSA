class leetcode38{
    public String countAndSay(int n) {
        String s="1";
        for(int i=2;i<=n;i++)
        {
            s=rle(s);
        }
        return s;
    }
    public static String rle(String test)
    {
            char c=test.charAt(0);
        int count=1;
        String ans="";
        for(int i=1;i<test.length();i++)
        {
            if(c==test.charAt(i)) count++;
            else{
                ans=ans+Integer.toString(count)+c;
                c=test.charAt(i);
                count=1;
            }
        }
        ans=ans+Integer.toString(count)+c;
        return ans;
    }
     public static void main(String[] args) {
        leetcode38 obj = new leetcode38();

        // Test Case 1
        int n1 = 1;
        System.out.println("countAndSay(" + n1 + ") = " + obj.countAndSay(n1)); // Output: "1"

        // Test Case 2
        int n2 = 4;
        System.out.println("countAndSay(" + n2 + ") = " + obj.countAndSay(n2)); // Output: "1211"

        // Test Case 3
        int n3 = 5;
        System.out.println("countAndSay(" + n3 + ") = " + obj.countAndSay(n3)); // Output: "111221"

        // Test Case 4
        int n4 = 6;
        System.out.println("countAndSay(" + n4 + ") = " + obj.countAndSay(n4)); // Output: "312211"
    }
}