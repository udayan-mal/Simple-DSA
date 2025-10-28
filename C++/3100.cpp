/*
Problem Statement for Leetcode 3100: Water Bottles II :
You are given two integers numBottles and numExchange.

numBottles represents the number of full water bottles that you initially have. In one operation, you can perform one of the following operations:

Drink any number of full water bottles turning them into empty bottles.
Exchange numExchange empty bottles with one full water bottle. Then, increase numExchange by one.
Note that you cannot exchange multiple batches of empty bottles for the same value of numExchange. For example, if numBottles == 3 and numExchange == 1, you cannot exchange 3 empty water bottles for 3 full bottles.

Return the maximum number of water bottles you can drink.

Author of this solution: regenpalkar28
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int drinkcount = 0;
        int fullc = numBottles, empc = 0;

        while(numBottles >= numExchange) {
            numBottles = fullc + empc;

            //drink
            empc+= fullc;
            drinkcount+= fullc;
            fullc = 0;

            //exchange if numExchange < empc
            while(numExchange<=empc) {
                empc-= numExchange;
                fullc++;
                numExchange++;
                numBottles = fullc + empc;
            }
        }   
        // after loop termination, drink any full bottle
        return drinkcount+fullc;
    }
};

int main() {
    int numBottles, numExchange;
    cout << "Enter number of bottles: ";
    cin >> numBottles;
    cout << "Enter initial exchange rate: ";
    cin >> numExchange;

    Solution s;
    int result = s.maxBottlesDrunk(numBottles, numExchange);
    cout << "Maximum bottles that can be drunk: " << result << endl;

    return 0;
}