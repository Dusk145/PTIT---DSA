#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <int>> a(2000);
vector <bool> ok(2000, true);
vector <pair <int, int>> b;
bool flag = true;

void dfs(int x){
    ok[x] = false;
    for (auto i : a[x]){
        if (ok[i]){
            b.push_back({x, i});
            dfs(i);
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
            a[y].push_back(x);
        }
        dfs(k);
        if (b.size() == n - 1){
            for (int i = 0; i < n - 1; ++i){
                cout << b[i].first << " " << b[i].second << endl;
            } 
        } else {
            cout << "-1\n";
        }
        for (int i = 1; i <= n; ++i){
            a[i].clear();
        }
        fill(ok.begin(), ok.end(), true);
        b.clear();
    }
    return 0;
}