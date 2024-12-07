#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 123456789

using namespace std;

ll res(ll n, ll k){
    if (k == 1){
        return n % mod;
    }
    ll temp = res(n, k / 2);
    if (k % 2 == 0){
        return temp % mod * temp % mod;
    } else {
        return temp % mod * temp % mod * n % mod;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        cout << res(2, n - 1) % mod << endl;
    }
    return 0;
}