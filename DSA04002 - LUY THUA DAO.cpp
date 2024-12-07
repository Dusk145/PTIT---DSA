#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007

using namespace std;

ll res(ll n, ll k){
    if (k == 1){
        return n % mod;
    }
    ll temp = res(n, k / 2);
    if (k % 2 == 0){
        return temp % mod * temp % mod;
    } else {
        return n % mod * temp % mod * temp % mod; 
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string a;
        cin >> a;
        string b = a;
        reverse(b.begin(), b.end());
        cout << res(stoll(a), stoll(b)) % mod << endl;
    }
    return 0;
}