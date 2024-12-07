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
        int n;
        cin >> n;
        vector <int> a(n);
        for (int i = 0; i < n; ++i){
            cin >> a[i];
        }
        vector <int> b(n), c(n);
        b[0] = a[0];
        c[n - 1] = a[n - 1];
        for (int i = 1; i < n; ++i){
            b[i] = min(b[i - 1], a[i]);
        }
        for (int i = n - 2; i >= 0; --i){
            c[i] = max(c[i + 1], a[i]);
        }
        int maxi = - 1, idx1 = 0, idx2 = 0;
        while (idx1 < n && idx2 < n){
            if (b[idx1] < c[idx2]){
                maxi = max(maxi, idx2 - idx1);
                ++idx2;
            } else {
                ++idx1;
            }
        }
        if (maxi == 0){
            cout << "-1\n";
        } else {
            cout << maxi << endl;
        }
    }
    return 0;
}