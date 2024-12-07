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
        vector <ll> dp(n + 1, 0);
        dp[0] = 1;
        for (int i = 1; i <= n; ++i){
            for (int j = 0; j < i; ++j){
                dp[i] += (dp[j] * dp[i - j - 1]);
            }
        }
        cout << dp[n] << endl;
    }
    return 0;
}