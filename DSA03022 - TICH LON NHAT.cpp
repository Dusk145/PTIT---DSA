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
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll x = a[n - 1] * a[n - 2];
    ll y = a[0] * a[1];
    ll z = x * a[n - 3];
    ll t = y * a[n - 1];
    cout << max(x, max(y, max(z, t))) << endl;
    return 0;
}