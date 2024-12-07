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
        vector <int> a(n), b(m);
        set <int> c;
        for (int i = 0; i < n; ++i){
            cin >> a[i];
            c.insert(a[i]);
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < m; ++i){
            cin >> b[i];
            c.insert(b[i]);
        }
        sort(b.begin(), b.end());
        for (auto x : c){
            cout << x << " ";
        }
        cout << endl;
        int idx1 = 0, idx2 = 0;
        while (idx1 < n && idx2 < m){
            if (a[idx1] == b[idx2]){
                cout << a[idx1] << " ";
                ++idx1;
                ++idx2;
            } else if (a[idx1] > b[idx2]){
                ++idx2;
            } else {
                ++idx1;
            }
        }
        cout << endl;
    }
    return 0;
}