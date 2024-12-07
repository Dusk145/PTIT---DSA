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
        vector <ll> a(n), b(m), c(k);
        for (int i = 0; i < n; ++i){
            cin >> a[i];
        }
        for (int i = 0; i < m; ++i){
            cin >> b[i];
        }
        for (int i = 0; i < k; ++i){
            cin >> c[i];
        }
        int idx1 = 0, idx2 = 0, idx3 = 0;
        bool ok = true;
        while (idx1 < n && idx2 < m && idx3 < k){
            if (a[idx1] == b[idx2] && b[idx2] == c[idx3]){
                cout << a[idx1] << " ";
                ok = false;
                ++idx1;
                ++idx2;
                ++idx3;
            }
            if (a[idx1] < c[idx3]){
                ++idx1;
            }
            if (b[idx2] < c[idx3]){
                ++idx2;
            }
            if (c[idx3] < a[idx1] || c[idx3] < b[idx2]){
                ++idx3;
            }
        }
        if (ok){
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}