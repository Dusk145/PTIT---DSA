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
        vector <ll> a(n);
        for (int i = 0; i < n; ++i){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        bool ok = true;
        for (int i = 0; i < n - 2; ++i){
            for (int j = i + 1; j < n; ++j){
                unsigned ll temp = a[i] * a[i] + a[j] * a[j];
                if (sqrt(temp) * sqrt(temp) == temp){
                    auto it = lower_bound(a.begin() + j + 1, a.end(), sqrt(temp));
                    if (*it == sqrt(temp)){
                        cout << "YES\n";
                        ok = false;
                        break;
                    }
                }
            }
            if (!ok){
                break;
            }
        }
        if (ok){
            cout << "NO\n";
        }
    }
    return 0;
}