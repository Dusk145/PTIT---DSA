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
        auto it = lower_bound(a.begin(), a.end(), k);
        if (it == a.end()){
            cout << n << endl;
        } else {
            if (k < a[0]){
                cout << "-1\n";
            } else if (*it == k){
                cout << it - a.begin() + 1 << endl;
            } else {
                cout << it - a.begin() << endl;
            }
        }
    }
    return 0;
}