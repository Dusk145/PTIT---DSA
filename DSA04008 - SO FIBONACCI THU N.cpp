#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007

using namespace std;

void mul(vector <vector <ll>> &a, vector <vector <ll>> &b){
    ll x = a[0][0] % mod * b[0][0] + a[0][1] % mod * b[1][0];
    ll y = a[0][0] % mod * b[0][1] + a[0][1] % mod * b[1][1];
    ll z = a[1][0] % mod * b[0][0] + a[1][1] % mod * b[1][0];
    ll t = a[1][0] % mod * b[0][1] + a[1][1] % mod * b[1][1];
    a = {{x % mod, y % mod}, {z % mod, t % mod}};
}

ll poww(vector <vector <ll>> &a, ll n){
    if (n == 1){
        return 1;
    }
    vector <vector <ll>> temp = {{1, 0}, {0, 1}};
    while (n){
        if (n % 2 == 1){
            mul(temp, a);
        }
        mul(a, a);
        n /= 2;
    }
    return temp[0][0];
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
        vector <vector <ll>> a = {{1, 1}, {1, 0}};
        cout << poww(a, n - 1) << endl;
    }
    return 0;
}