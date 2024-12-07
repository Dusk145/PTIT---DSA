#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <int>> a(10000);
vector <pair <int, int>> b;
vector <bool> ok(10000, true);

void dfs1(int x){
    ok[x] = false;
    for (int i = 0; i < a[x].size(); ++i){
        if (ok[a[x][i]]){
            dfs1(a[x][i]);
        }
    }
}

void dfs2(int x, int u, int v){
    ok[x] = false;
    for (int i = 0; i < a[x].size(); ++i){
        if ((x == u && a[x][i] == v) || (x == v && a[x][i] == u)){
            continue;
        }
        if (ok[a[x][i]]){
            dfs2(a[x][i], u, v);
        }
    }
}

void res(int n){
    int cnt_tplt = 0;
    for (int i = 1; i <= n; ++i){
        if (ok[i]){
            ++cnt_tplt;
            dfs1(i);
        }
    }
    for (int i = 0; i < b.size(); ++i){
        int fi = b[i].first, se = b[i].second;
        fill(ok.begin(), ok.end(), true);
        int cnt = 0;
        for (int j = 1; j <= n; ++j){
            if (ok[j]){
                ++cnt;
                dfs2(j, fi, se);
            }
        }
        if (cnt > cnt_tplt){
            cout << fi << " " << se << " ";
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;;
    while (t--){
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < m; ++i){
            int x, y;
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
            b.push_back({x, y});
        }
        res(n);
        cout << endl;
        for (int i = 1; i <= n; ++i){
            a[i].clear();
        }
        b.clear();
        fill(ok.begin(), ok.end(), true);
    }
    return 0;
}