#include <bits/stdc++.h>
using namespace std;

double fractionalKnapsack(int W,int values[],int weights[],int n) {
    vector<pair<double, int>> ratio(n);
    for (int i=0;i<n;i++) {
        ratio[i] = {(double)values[i]/weights[i], i};
    }

    sort(ratio.rbegin(),ratio.rend());
    double totalValue = 0.0;

    for (int i=0;i<n;i++) {
        int idx=ratio[i].second;

        if (weights[idx] <= W) {
            W -= weights[idx];
            totalValue += values[idx];
        } else {
            double fraction = (double)W / weights[idx];
            totalValue += values[idx] * fraction;
            break;
        }
    }

    return totalValue;
}

int main() {
   
    int n;
    cin>>n;
    int values[n],weights[n];
    for(int i=0;i<n;++i){
        cin>>values[i];
    }
    for(int i=0;i<n;++i){
        cin>>weights[i];
    }

    int W = 50;

    cout << fractionalKnapsack(W,values,weights,n) << endl;

}
