#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007

using namespace std;

void res(vector <vector <ll>> &a, vector <vector <ll>> &b, int n){
    vector <vector <ll>> temp(n, vector <ll> (n));
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            temp[i][j] = 0;
            for (int k = 0; k < n; ++k){
                temp[i][j] += (a[i][k] % mod * b[k][j]);
                temp[i][j] %= mod;
            }
        }
    }
    b = temp;
}

void Pow(vector <vector <ll>> &a, vector <vector <ll>> &b, int n, int k){
    if (k == 1){
        return;
    }
    Pow(a, b, n, k / 2);
    res(b, b, n);
    if (k % 2 == 1){
        res(a, b, n);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        vector <vector <ll>> a(n, vector <ll> (n)), b(n, vector <ll> (n));
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < n; ++j){
                cin >> a[i][j];
                b[i][j] = a[i][j];
            }
        }
        Pow(a, b, n, k);
        ll S = 0;
        for (int i = 0; i < n; ++i){
            S += (b[i][n - 1] % mod);
            S %= mod;
        }
        cout << S % mod << endl;
    }
    return 0;
}