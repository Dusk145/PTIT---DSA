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
        vector <ll> a(n);
        for (int i = 0; i < n; ++i){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll cnt = 0;
        for (int i = 0; i < n - 1; ++i){
            ll x = upper_bound(a.begin() + i + 1, a.end(), k - a[i]) - a.begin();
            ll y = lower_bound(a.begin() + i + 1, a.end(), k - a[i]) - a.begin();
            cnt += (x - y);
        }
        cout << cnt << endl;
    }
    return 0;
}