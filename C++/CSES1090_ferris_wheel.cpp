#include <bits/stdc++.h>
using namespace std;

/*
Problem: Ferris Wheel
Platform: CSES Problem Set
Problem Link: https://cses.fi/problemset/task/1090

Description:
There are n children, each with a certain weight.
A Ferris wheel has gondolas that can carry at most two children,
with a combined weight not exceeding x.

You need to find the minimum number of gondolas required
to give all children a ride.

Intuition:
Instead of using a two-pointer approach, we can use a map (ordered frequency counter)
to simulate picking children by their weights.

The main idea:
1. We always try to pair each child (starting from lightest available) with
   the heaviest possible remaining child such that their combined weight ≤ x.
2. Once a child is seated, we decrease their frequency in the map.
3. If we can’t find a valid pair, the current child goes alone.
The main concepts used:
1. Greedy Approach
2. Binary Search
Algorithm:
1. Build a frequency map (weight → count).
2. For each distinct weight, while children of that weight remain:
   - Find the heaviest possible partner `partner = x - weight`.
   - Use `lower_bound` to locate such a child efficiently.
   - Adjust for edge cases (if `lower_bound` points to something too large or invalid).
   - Decrease counts of both weights used.
   - Count gondolas.
3. Continue until all children are assigned.

Time Complexity: O(n log n)
  (each lookup, insert, erase in std::map is O(log n))
Space Complexity: O(n)
  (we store all distinct weights and their counts)
*/

int minimumGondolasUsingMap(int n, map<int, int>& weightFreq, int maxWeight) {
    int gondolaCount = 0;

    for (auto& entry : weightFreq) {
        int currentWeight = entry.first;

        while (weightFreq[currentWeight] > 0) {
            int remaining = maxWeight - currentWeight;

            auto partnerIt = weightFreq.lower_bound(remaining);

            // Adjust partnerIt if it goes beyond max possible weight
            if (partnerIt == weightFreq.end()) partnerIt--;
            else if (partnerIt->first > remaining) {
                if (partnerIt == weightFreq.begin()) return n - gondolaCount;
                partnerIt--;
            }

            int partnerWeight = partnerIt->first;

            // If pairing invalid (same weight but only 1 left, or no valid partner)
            if ((partnerWeight == currentWeight && weightFreq[currentWeight] == 1) ||
                weightFreq[partnerWeight] == 0) {
                return n - gondolaCount;
            }

            // Use up one of each
            weightFreq[currentWeight]--;
            weightFreq[partnerWeight]--;

            // Clean up if count becomes zero
            if (weightFreq[partnerWeight] == 0 && partnerWeight != currentWeight)
                weightFreq.erase(partnerWeight);

            gondolaCount++;
        }
    }

    return gondolaCount;
}

int main() {
    /*
    Example Test Case 1:
    Input:
    n = 4, x = 10
    Weights: [7, 2, 3, 9]

    Expected Output:
    3
    Explanation:
    Possible groupings → (7, 3), (9), (2)
    */
    {
        int n = 4, x = 10;
        map<int, int> weightFreq = {{7, 1}, {2, 1}, {3, 1}, {9, 1}};
        cout << "Test 1 Output: " << minimumGondolasUsingMap(n, weightFreq, x)
             << " (Expected: 3)" << endl;
    }

    /*
    Example Test Case 2:
    Input:
    n = 6, x = 8
    Weights: [3, 5, 3, 4, 2, 1]

    Expected Output:
    4
    Explanation:
    Possible groupings → (1,5), (2,4), (3), (3)
    */
    {
        int n = 6, x = 8;
        map<int, int> weightFreq;
        vector<int> weights = {3, 5, 3, 4, 2, 1};
        for (int w : weights) weightFreq[w]++;
        cout << "Test 2 Output: " << minimumGondolasUsingMap(n, weightFreq, x)
             << " (Expected: 4)" << endl;
    }

    return 0;
}
