#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, k;
    while (cin >> n >> k){
        if (n == k && k == 0){
            break;
        }
        if (k == 0){
            n = 1;
        }
        ll res = 1;
        while (k != 1 && k != 0){
            if (k % 2 == 0){
                n = (n % mod * n % mod) % mod;
                k /= 2;
            } else {
                res = (res % mod * n % mod) % mod;
                --k;
            }
        }
        cout << (n % mod * res % mod) % mod << endl;
    }
    return 0;
}