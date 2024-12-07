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
        ll n, k;
        cin >> n >> k;
        vector <ll> a(n);
        for (ll i = 0; i < n; ++i){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll cnt = 0;
        for (int i = 0; i < n - 2; ++i){
            for (int j = i + 1; j < n - 1; ++j){
                auto it = lower_bound(a.begin() + j + 1, a.end(), k - a[i] - a[j]);
                cnt += (it - a.begin() - j - 1);
            }
        }
        cout << cnt << endl;
    }
    return 0;
}