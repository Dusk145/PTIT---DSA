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
        vector <ll> a(n);
        for (int i = 0; i < n; ++i){
            cin >> a[i];
        }
        vector <ll> dp(n, 0);
        dp[0] = a[0];
        dp[1] = max(a[0], a[1]);
        for (int i = 2; i < n; ++i){
            dp[i] = max(dp[i - 1], dp[i - 2] + a[i]);
        }
        cout << *max_element(dp.begin(), dp.end()) << endl;
    }
    return 0;
}