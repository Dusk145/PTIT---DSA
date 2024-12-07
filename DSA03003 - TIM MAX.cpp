#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll const mod = 1000000007;
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector <ll> a(n);
        for (int i = 0; i < n; ++i){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        unsigned ll S = 0;
        for (int i = 1; i < n; ++i){
            a[i] %= mod;
            S += a[i] * i;
            S %= mod;
        }
        cout << S << endl;
    }
    return 0;
}