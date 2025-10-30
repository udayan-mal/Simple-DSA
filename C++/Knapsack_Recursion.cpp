#include <bits/stdc++.h>
using namespace std;

int knapsack(int W,int wt[],int val[],int n) {
    if (n == 0 || W == 0)
        return 0;

    if (wt[n-1]>W)
        return knapsack(W, wt, val, n - 1);

    else{
        return max(val[n-1] + knapsack(W-wt[n-1],wt,val,n-1),knapsack(W, wt,val,n-1));
    }
}

int main() {
    int n;
    cin>>n;
    int val[n],wt[n];
    for(int i=0;i<n;++i){
        cin>>val[i];
    }

    for(int i=0;i<n;++i){
        cin>>wt[i];
    }

    int W = 50;
    cout << knapsack(W, wt, val, n) << endl;
}
