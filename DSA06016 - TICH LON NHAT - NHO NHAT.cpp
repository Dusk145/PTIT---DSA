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
        int n, m;
        cin >> n >> m;
        vector <ll> a(n), b(m);
        for (int i = 0; i < n; ++i){
            cin >> a[i];
        }
        for (int i = 0; i < m; ++i){
            cin >> b[i];
        }
        auto it_max = max_element(a.begin(), a.end());
        auto it_min = min_element(b.begin(), b.end());
        cout << (ll)(*it_max * *it_min) << endl;
    }
    return 0;
}