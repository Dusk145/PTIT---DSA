#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <pair <int, int>>> a(2000);

void dfs(int x, int n){
    vector <int> b(n + 1, 1e9);
    b[x] = 0;
    priority_queue <pair <int, int>, vector <pair <int, int>>, greater <pair <int, int>>> c;
    c.push({0, x});
    while (!c.empty()){
        int temp = c.top().second;
        int cnt = c.top().first;
        c.pop();
        if (cnt > b[temp]){
            continue;
        }
        for (auto i : a[temp]){
            int u = i.first, v = i.second;
            if (b[u] > b[temp] + v){
                b[u] = b[temp] + v;
                c.push({b[u], u});
            }
        }
    }
    for (int i = 1; i <= n; ++i){
        cout << b[i] << " ";
    }
    cout << endl;
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
            int x, y, z;
            cin >> x >> y >> z;
            a[x].push_back({y, z});
            a[y].push_back({x, z});
        }
        dfs(k, n);
        for (int i = 1; i <= n; ++i){
            a[i].clear();
        }
    }
    return 0;
}