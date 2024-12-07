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
        string a, b;
        cin >> a >> b;
        a = " " + a;
        b = " " + b;
        vector <vector <int>> dp(a.length(), vector <int> (b.length(), 0));
        for (int i = 1; i < a.length(); ++i){
            for (int j = 1; j < b.length(); ++j){
                if (a[i] == b[j]){
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        cout << dp[a.length() - 1][b.length() - 1] << endl;
    }
    return 0;
}