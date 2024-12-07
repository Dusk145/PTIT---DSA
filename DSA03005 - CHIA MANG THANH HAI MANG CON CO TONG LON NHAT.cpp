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
        int n, k;
        cin >> n >> k;
        vector <int> a(n);
        int S = 0;
        for (int i = 0; i < n; ++i){
            cin >> a[i];
            S += a[i];
        }
        sort(a.begin(), a.end());
        int S1 = 0, S2 = 0;
        for (int i = 0; i < n; ++i){
            if (i < k){
                S1 += a[i];
            }
            if (i < n - k){
                S2 += a[i];
            }
        }
        cout << max(S - 2 * S1, S - 2 * S2) << endl;
    }
    return 0;
}