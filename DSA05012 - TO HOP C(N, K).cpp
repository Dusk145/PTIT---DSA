#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        vector <vector <ll>> dp(n + 1, vector <ll> (k + 1, 1));
        for (int i = 1; i <= n; ++i){
            for (int j = 1; j <= min(i, k); ++j){
                if (j <= i - 1){
                    dp[i][j] = dp[i - 1][j - 1] % mod + dp[i - 1][j] % mod;
                    dp[i][j] %= mod;
                }
            }
        }
        cout << dp[n][k] << endl;
    }
    return 0;
}