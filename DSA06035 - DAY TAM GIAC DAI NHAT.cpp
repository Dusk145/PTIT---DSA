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
        vector <int> up(n, 1), down(n, 1);
        for (int i = 1; i < n; ++i){
            if (a[i] > a[i - 1]){
                up[i] += up[i - 1];
            }
        }
        for (int i = n - 2; i >= 0; --i){
            if (a[i] > a[i + 1]){
                down[i] += down[i + 1];
            }
        }
        int res = 0;
        for (int i = 0; i < n; ++i){
            if (up[i] > 0 && down[i] > 0){
                res = max(res, up[i] + down[i] - 1);
            }
        }
        cout << res << endl;
    }
    return 0;
}