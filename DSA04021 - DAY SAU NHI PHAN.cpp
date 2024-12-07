#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <ll> a(93);

void fibo_length(){
    a[0] = a[1] = 1;
    for (int i = 2; i < 93; ++i){
        a[i] = a[i - 2] + a[i - 1];
    }
}

void res(ll n, ll k){
    if (n == 0){
        cout << "0" << endl;
    } else if (n == 1){
        cout << "1" << endl;
    } else if (k <= a[n - 2]){
        res(n - 2, k);
    } else {
        res(n - 1, k - a[n - 2]);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    fibo_length();
    int t;
    cin >> t;
    while (t--){
        ll n, k;
        cin >> n >> k;
        res(n - 1, k);
    }
    return 0;
}