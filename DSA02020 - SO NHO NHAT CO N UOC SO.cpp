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
        ll res = 1;
        for (ll i = 2; i < n - 1; ++i){
            res = (res * i) / __gcd(res, i);
        }
        cout << res << endl;
    }
    return 0;
}