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
        vector <ll> a(n + 1);
        for (int i = 1; i <= n; ++i){
            cin >> a[i];
        }
        vector <ll> dp(n + 1, 0);
        dp[1] = a[1];
        dp[2] = max(a[1], a[2]);
        for (int i = 3; i <= n; ++i){
            dp[i] += (max(dp[i - 1], dp[i - 2] + a[i]));
        }
        cout << dp[n] << endl;
    }
    return 0;
}