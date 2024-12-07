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
        vector <int> a(n), b(n);
        for (int i = 0; i < n; ++i){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b.begin(), b.end());
        bool ok = true;
        for (int i = 0; i < n; ++i){
            if (a[i] != b[i] && a[i] != b[n - i - 1]){
                ok = false;
                break;
            }
        }
        if (ok){
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}