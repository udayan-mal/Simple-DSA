#include <bits/stdc++.h>
using namespace std;
const int N = 1e3;

int dp[N][N];

int LCS(string &s1, string &s2, int i, int j) {
    if (i == 0 || j == 0)
        return 0;

    if (dp[i][j] != -1)
        return dp[i][j];

    if (s1[i-1] == s2[j-1])
        return dp[i][j] = 1 + LCS(s1,s2,i-1,j-1);

    return dp[i][j] = max(LCS(s1,s2,i-1,j),LCS(s1,s2,i,j-1));
}

int main() {
   string s1,s2;
   cin>>s1>>s2;

    int n = s1.size(), m = s2.size();
    for(int i=0;i<=n;++i){
        for(int j=0;j<=m;++j){
            dp[i][j]=-1;
        }
    }

    cout << "Length of LCS: " << LCS(s1,s2,n,m) << endl;
}
