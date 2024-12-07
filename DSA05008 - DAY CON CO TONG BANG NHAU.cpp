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
        int n, k;
        cin >> n >> k;
        vector <int> a(n);
        for (int i = 0; i < n; ++i){
            cin >> a[i];
        }
        vector <bool> dp(k + 1, false);
        dp[0] = true;
        for (int i = 0; i < n; ++i){
            for (int j = k; j >= a[i]; --j){
                if (dp[j - a[i]]){
                    dp[j] = true;
                }
            }
        }
        if (dp[k]){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}