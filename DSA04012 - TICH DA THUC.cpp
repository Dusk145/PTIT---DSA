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
        for (int i = 0; i < n; ++i){
            cin >> a[i];
        }
        for (int i = 0; i < m; ++i){
            cin >> b[i];
        }
        vector <int> c(n + m - 1, 0);
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < m; ++j){
                c[i + j] += a[i] * b[j];
            }
        }
        for (int i = 0; i < c.size(); ++i){
            cout << c[i] << " ";
        }
        cout << endl;
    }
    return 0;
}