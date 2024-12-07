#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <int>> a(2000);
vector <bool> ok(2000, false);
vector <int> b;

void res(int x){
    b.push_back(x);
    ok[x] = true;
    for (int i = 0; i < a[x].size(); ++i){
        if (!ok[a[x][i]]){
            res(a[x][i]);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n, m, k;
        cin >> n >> m >> k;
        for (int i = 0; i < m; ++i){
            int x, y;
            cin >> x >> y;
            a[x].push_back(y);
        }
        for (int i = 1; i <= n; ++i){
            sort(a[i].begin(), a[i].end());
        }
        res(k);
        for (int i = 0; i < b.size(); ++i){
            cout << b[i] << " ";
        }
        cout << endl;
        for (int i = 1; i <= n; ++i){
            a[i].clear();
        }
        fill(ok.begin(), ok.end(), false);
        b.clear();
    }
    return 0;
}