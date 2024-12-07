#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

void res(ll n, ll k, ll temp){
    if (k == 1){
        cout << "A" << endl;
    } else if (k == temp){
        cout << (char)('A' + n) << endl;
    } else {
        if (k >= temp){
            k -= temp;
        }
        res(n - 1, k, temp / 2);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        ll n, k;
        cin >> n >> k;
        res(n, k, pow(2, n));
    }
    return 0;
}