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
        vector <int> dp(n + 1, 0);
        dp[0] = dp[1] = 1;
        if (n >= 2){
            dp[2] = 2;
        }
        if (n >= 3){
            dp[3] = 4;
        }
        for (int i = 4; i <= n; ++i){
            dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
        }
        cout << dp[n] << endl;
    }
    return 0;
}