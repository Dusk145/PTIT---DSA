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
        vector <ll> a(n), b(n);
        for (int i = 0; i < n; ++i){
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i){
            cin >> b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater <ll> ());
        ll res = 0;
        for (int i = 0; i < n; ++i){
            res += a[i] * b[i];
        }
        cout << res << endl;
    }
    return 0;
}