#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> result;
        int curr = 1;  // Start from 1 (smallest number)
        
        // We’ll generate all n numbers in lexicographical order
        for (int i = 0; i < n; i++) {
            result.push_back(curr);
            
            // Try to go "deeper" — e.g., from 1 → 10 if possible
            if (curr * 10 <= n) {
                curr *= 10;
            }
            // Otherwise, move to the "next sibling"
            else {
                // If we hit the end (like 19), we backtrack
                while (curr % 10 == 9 || curr + 1 > n)
                    curr /= 10;  // Go up one level (backtrack)
                
                curr++;  // Move to the next number
            }
        }
        
        return result;
    }
};

int main() {
    Solution s;
    int n = 13;
    vector<int> res = s.lexicalOrder(n);

    cout << "Lexicographical order for n = " << n << ":\n";
    for (int num : res)
        cout << num << " ";
    cout << endl;

    return 0;
}
