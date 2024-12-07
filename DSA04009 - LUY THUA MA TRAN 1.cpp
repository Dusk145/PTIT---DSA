#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007

using namespace std;

void mul(vector <vector <ll>> &a, vector <vector <ll>> &b, int n){
    vector <vector <ll>> temp(n, vector <ll> (n, 0));
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            for (int k = 0; k < n; ++k){
                temp[i][j] += (a[i][k] * b[k][j] % mod) ;
                temp[i][j] %= mod;
            }
        }
    }
    a = temp;
}

void poww(vector <vector <ll>> &a, int n, int k){
    if (k == 1){
        return;
    }
    vector <vector <ll>> temp(n, vector <ll> (n, 0));
    for (int i = 0; i < n; ++i){
        temp[i][i] = 1;
    }
    while (k){
        if (k % 2 == 1){
            mul(temp, a, n);
        }
        mul(a, a, n);
        k /= 2;
    }
    a = temp;
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
        vector <vector <ll>> a(n, vector <ll> (n));
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < n; ++j){
                cin >> a[i][j];
            }
        }
        poww(a, n, k);
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < n; ++j){
                cout << a[i][j] % mod << " ";
            }
            cout << endl;
        }
    }
    return 0;
}