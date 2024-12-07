#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int a[4] = {5000, 3000, 2000, 1000};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        ll n, m;
        cin >> n >> m;
        ll S = 0, cnt = 0, temp = 0;;
        string word = to_string(n);
        if (word.length() > 4){
            temp = word.length() - 4;
            if (temp > m){
                temp = m;
            }
        } else {
            temp = 0;
        }
        ll inc = 1;
        for (int i = 0; i < temp; ++i){
            inc *= 10;
        }
        int idx = 0;
        while (n && inc >= 1){
            ll x = a[idx] * inc;
            if (n / x > 0){
                n -= x * (n / x);
                S += (n / x);
                ++cnt;
            }
            ++idx;
            if (idx == 4){
                inc /= 10;
                idx = 0;
            }
        }
        if (n == 0){
            cout << S << " " << cnt << endl;
        } else {
            cout << "0\n";
        }
    }
    return 0;
}