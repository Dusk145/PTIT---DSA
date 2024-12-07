#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        priority_queue <ll, vector <ll>, greater <ll>> a;
        for (int i = 0; i < n; ++i){
            ll x;
            cin >> x;
            a.push(x);
        }
        ll cnt = 0;
        while (a.size() > 1){
            ll temp = a.top() % mod;
            a.pop();
            temp += (a.top() % mod);
            a.pop();
            cnt += (temp % mod);
            a.push(temp % mod);
        }
        cout << cnt % mod << endl;
    }
    return 0;
}