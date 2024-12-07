#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <bool>> ok(200, vector <bool> (200));
int dx[4] = {0, - 1, 0, 1};
int dy[4] = {- 1, 0, 1, 0};

void res(int i, int j, int x, int y, int n){
    queue <pair <pair <int, int>, int>> a;
    a.push({{i, j}, 0});
    ok[i][j] = false;
    while (!a.empty()){
        int u = a.front().first.first;
        int v = a.front().first.second;
        int cnt = a.front().second;
        a.pop();
        if (u == x && v == y){
            cout << cnt << endl;
            return;
        }
        for (int k = 0; k < 4; ++k){
            int du = u + dx[k];
            int dv = v + dy[k];
            while (du >= 0 && du < n && dv >= 0 && dv < n && ok[du][dv]){
                a.push({{du, dv}, cnt + 1});
                ok[du][dv] = false;
                du += dx[k];
                dv += dy[k];
            }
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
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < n; ++j){
                char c;
                cin >> c;
                if (c == '.'){
                    ok[i][j] = true;
                } else {
                    ok[i][j] = false;
                }
            }
        }
        int x, y, u, v;
        cin >> x >> y >> u >> v;
        res(x, y, u, v, n);
    }
    return 0;
}