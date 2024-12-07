#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector <int> a(n), dp(n + 1, 0);
    int maxi = 0;
    for (int i = 0; i < n; ++i){
        cin >> a[i];
        dp[a[i]] = dp[a[i] - 1] + 1;
        maxi = max(maxi, dp[a[i]]);
    }
    cout << n - maxi << endl;
    return 0;
}