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
        vector <vector <int>> a(n + 1);
        for (int i = 0; i < m; ++i){
            int x, y;
            cin >> x >> y;
            a[x].push_back(y);
        }
        bool ok = true;
        for (int i = 1; i <= n; ++i){
            int cnt = 0;
            for (int j = 1; j <= n; ++j){
                if (j != i && find(a[j].begin(), a[j].end(), i) != a[j].end()){
                    ++cnt;
                }
            }
            if (a[i].size() != cnt){
                cout << "0";
                ok = false;
                break;
            }
        }
        if (ok){
            cout << "1";
        }
        cout << endl;
    }
    return 0;
}