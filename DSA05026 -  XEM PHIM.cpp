#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int x, n;
    cin >> x >> n;
    vector <int> a(n + 1, 0);
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    vector <vector <int>> dp(n + 1, vector <int> (x + 1, 0));
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= x; ++j){
            dp[i][j] = dp[i - 1][j];
            if (a[i] <= j){
                dp[i][j] = max(dp[i][j], dp[i - 1][j - a[i]] + a[i]);
            }
        }
    }
    cout << dp[n][x] << endl;
    return 0;
}