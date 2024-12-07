#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <ll> a, b;
bool ok = true;

void res(ll begin, ll end, ll S, ll k){
    if (!ok){
        return;
    }
    for (int i = begin; i < end; ++i){
        b.push_back(a[i]);
        S += a[i];
        if (S == k){
            cout << b.size() << endl;
            ok = false;
            return;
        } else if (S < k){
            res(i + 1, end, S, k);
        }
        S -= a[i];
        b.pop_back();
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
        for (ll i = 0; i < n; ++i){
            ll x;
            cin >> x;
            a.push_back(x);
        }
        sort(a.begin(), a.end(), greater <ll> ());
        res(0, n, 0, k);
        if (ok){
            cout << "-1\n";
        }
        a.clear();
        b.clear();
        ok = true;
    }
    return 0;
}