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
        string a;
        cin >> a;
        a = " " + a;
        vector <vector <bool>> dp(a.length(), vector <bool> (a.length(), false));
        for (int i = 1; i < a.length(); ++i){
            dp[i][i] = true;
        }
        int res = INT_MIN;
        for (int i = 2; i < a.length(); ++i){
            for (int j = 1; j <= a.length() - i; ++j){
                int temp = i + j - 1;
                if (a[j] == a[temp]){
                    if (i == 2){
                        dp[j][temp] = true;
                    } else {
                        dp[j][temp] = dp[j + 1][temp - 1];
                    }
                }
                if (dp[j][temp]){
                    res = max(res, i);
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}