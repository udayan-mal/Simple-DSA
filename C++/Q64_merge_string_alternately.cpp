#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        int i = 0, j = 0;

        // Reserve memory to avoid repeated reallocations (minor optimization)
        result.reserve(word1.size() + word2.size());

        // Add characters alternately while both strings have characters left
        while (i < word1.size() && j < word2.size()) {
            result += word1[i++];
            result += word2[j++];
        }

        // Append any remaining characters from either string
        if (i < word1.size()) result += word1.substr(i);
        if (j < word2.size()) result += word2.substr(j);

        return result;
    }
};

int main() {
    Solution sol;
    cout << sol.mergeAlternately("abc", "pqr") << endl;     // Output: apbqcr
    cout << sol.mergeAlternately("ab", "pqrs") << endl;     // Output: apbqrs
    cout << sol.mergeAlternately("abcd", "pq") << endl;     // Output: apbqcd
    return 0;
}