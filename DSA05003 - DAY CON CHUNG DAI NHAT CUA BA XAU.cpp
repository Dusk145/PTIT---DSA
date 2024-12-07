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
        int n, m, l;
        cin >> n >> m >> l;
        string a, b, c;
        cin >> a >> b >> c;
        a = " " + a;
        b = " " + b;
        c = " " + c;
        vector <vector <vector <int>>> dp(n + 1, vector <vector <int>> (m + 1, vector <int> (l + 1, 0)));
        for (int i = 1; i <= n; ++i){
            for (int j = 1; j <= m; ++j){
                for (int k = 1; k <= l; ++k){
                    if (a[i] == b[j] && b[j] == c[k]){
                        dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1;
                    } else {
                        dp[i][j][k] = max(dp[i - 1][j][k], max(dp[i][j - 1][k], dp[i][j][k - 1]));
                    }
                }
            }
        }
        cout << dp[n][m][l] << endl;
    }
    return 0;
}