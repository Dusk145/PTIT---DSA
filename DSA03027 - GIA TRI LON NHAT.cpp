#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector <int> a(n);
    ll S = 0;
    for (int i = 0; i < n; ++i){
        cin >> a[i];
        if (a[i] > 0){
            S += a[i];
        }
    }
    cout << (ll)(S * 2) << endl;
    return 0;
}