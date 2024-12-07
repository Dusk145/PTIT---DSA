#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector <ll> dp(n, 1);
        int idx1 = 0, idx2 = 0, idx3 = 0;
        for (int i = 1; i < n; ++i){
            dp[i] = min(dp[idx1] * 2, min(dp[idx2] * 3, dp[idx3] * 5));
            if (dp[i] == dp[idx1] * 2){
                ++idx1;
            } 
            if (dp[i] == dp[idx2] * 3){
                ++idx2;
            }
            if (dp[i] == dp[idx3] * 5){
                ++idx3;
            }
        }
        cout << dp[n - 1] << endl;
    }
    return 0;
}