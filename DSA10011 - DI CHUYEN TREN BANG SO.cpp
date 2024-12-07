#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <int>> a(600, vector <int> (600));
int dx[4] = {0, - 1, 0, 1};
int dy[4] = {- 1, 0, 1, 0};

void dijikstra(int n, int m){
    vector <vector <int>> res(n, vector <int> (m, 1e9));
    res[0][0] = a[0][0];
    priority_queue <pair <int, pair <int, int>>, vector <pair <int, pair <int, int>>>, greater <pair <int, pair <int, int>>>> b;
    b.push({a[0][0], {0, 0}});
    while (!b.empty()){
        int cnt = b.top().first;
        int x = b.top().second.first;
        int y = b.top().second.second;
        b.pop();
        if (cnt > res[x][y]){
            continue;
        }
        for (int k = 0; k < 4; ++k){
            int u = x + dx[k];
            int v = y + dy[k];
            if (u >= 0 && u < n && v >= 0 && v < m && res[u][v] > cnt + a[u][v]){
                res[u][v] = cnt + a[u][v];
                b.push({res[u][v], {u, v}});
            }
        }
    }
    cout << res[n - 1][m - 1] << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < m; ++j){
                cin >> a[i][j];
            }
        }
        dijikstra(n , m);
    }
    return 0;
}