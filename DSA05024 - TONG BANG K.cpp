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
        vector <int> a(n);
        for (int i = 0; i < n; ++i){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vector <int> dp(k + 1, 0);
        dp[0] = 1;
        for (int i = 0; i < n; ++i){
            for (int j = a[i]; j <= k; ++j){
                dp[j] = (dp[j] % mod + dp[j - a[i]] % mod) % mod; 
            }
        }
        cout << dp[k] << endl;
    }
    return 0;
}