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
        if (k > n){
            cout << "0\n";
        } else {
            vector <vector <ll>> dp(n + 1, vector <ll> (k + 1, 1));
            for (int i = 1; i <= n; ++i){
                for (int j = 1; j <= k; ++j){
                    dp[i][j] = i * dp[i - 1][j - 1] % mod;
                }
            }
            cout << dp[n][k] << endl;
        }
    }
    return 0;
}