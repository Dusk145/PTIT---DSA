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
        int cnt = 0;
        for (int i = 0; i < n - 1; ++i){
            auto it = min_element(a.begin() + i, a.end());
            if (*it != a[i]){
                ++cnt;
                swap(*it, a[i]);
            }
        }
        cout << cnt << endl;
    }
    return 0;
}