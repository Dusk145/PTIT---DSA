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
        vector <int> a(n);
        for (int i = 0; i < n; ++i){
            cin >> a[i];
        }
        vector <int> dp(n + 1, 1);
        for (int i = 1; i < n; ++i){
            for (int j = 0; j < i; ++j){
                if (a[i] >= a[j]){
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
        }
        cout << n - *max_element(dp.begin(), dp.end()) << endl;
    }
    return 0;
}