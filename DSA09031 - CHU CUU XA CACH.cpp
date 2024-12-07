#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

set <pair <pair <int, int>, pair <int, int>>> a;
vector <pair <int, int>> b;
vector <vector <bool>> ok(200, vector <bool> (200, true));
int dx[4] = {0, - 1, 0, 1};
int dy[4] = {- 1, 0, 1, 0};

void dfs(int i, int j, int n){
    ok[i][j] = false;
    for (int k = 0; k < 4; ++k){
        int x = i + dx[k];
        int y = j + dy[k];
        if (x >= 0 && x < n && y >= 0 && y < n && a.find({{i, j}, {x, y}}) == a.end() && ok[x][y]){
            dfs(x, y, n);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 0; i < k; ++i){
        int x, y, z, t;
        cin >> x >> y >> z >> t;
        a.insert({{x - 1, y - 1}, {z - 1, t - 1}});
        a.insert({{z - 1, t - 1}, {x - 1, y - 1}});
    }
    for (int i = 0; i < m; ++i){
        int x, y;
        cin >> x >> y;
        b.push_back({x - 1, y - 1});
    }
    int cnt = 0;
    for (int i = 0; i < m; ++i){
        dfs(b[i].first, b[i].second, n);
        for (int j = 0; j < m; ++j){
            if (ok[b[j].first][b[j].second]){
                ++cnt;
            }
        }
        for (int i = 0; i < n; ++i){
            fill(ok[i].begin(), ok[i].end(), true);
        }
    }
    cout << cnt / 2 << endl;
    return 0;
}