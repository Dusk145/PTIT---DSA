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
        vector <int> dp(n + 1, 0);
        dp[0] = dp[1] = 1;
        for (int i = 2; i <= n; ++i){
            for (int j = 1; j <= min(i, k); ++j){
                dp[i] += (dp[i - j] % mod);
                dp[i] %= mod;
            }
        }
        cout << dp[n] << endl;
    }
    return 0;
}