// This is Kadane's algo which is used to find maximum subarray sum in the given array...


#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {-2,1,-3,6,0,3,-1,2,1,-5,4};
    int n =arr.size();

    int mxx=arr[0];
    int crr_sum=arr[0];

    for (int i=1;i< n;i++) {
        crr_sum= max(arr[i], crr_sum+arr[i]);
        mxx = max(mxx,crr_sum);
    }

    cout << "Maximum subarray sum: " << mxx << endl;
}
