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
        bool ok = true;
        for (ll i = 0; i < n - 2; ++i){
            for (ll j = i + 1; j < n; ++j){
                if (*lower_bound(a.begin() + j + 1, a.end(), k - a[i] - a[j]) == k - a[i] - a[j]){
                    cout << "YES\n";
                    ok = false;
                    break;
                }
            }
            if (!ok){
                break;
            }
        }
        if (ok){
            cout << "NO\n";
        }
    }
    return 0;
}