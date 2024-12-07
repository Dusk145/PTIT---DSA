#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n, m, k;
        cin >> n >> m >> k;
        multiset <int> a;
        for (int i = 0; i < n + m; ++i){
            int x;
            cin >> x;
            a.insert(x);
        }
        int cnt = 0;
        for (auto x : a){
            ++cnt;
            if (cnt == k){
                cout << x << endl;
                break;
            }
        }
    }
    return 0;
}