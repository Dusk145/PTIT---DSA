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
    cin.ignore();
    while (t--){
        string a;
        getline(cin, a);
        if (a[0] == '0'){
            cout << "0\n";
        } else {
            vector <int> dp(a.length() + 1, 0);
            dp[0] = dp[1] = 1;
            for (int i = 2; i <= a.length(); ++i){
                if (a[i - 1] > '0'){
                    dp[i] += dp[i - 1];
                }
                if (a[i - 2] == '1' || (a[i - 2] == '2' && a[i - 1] <= '6')){
                    dp[i] += dp[i - 2];
                }
            }
            cout << dp[a.length()] << endl;
        }
    }
    return 0;
}