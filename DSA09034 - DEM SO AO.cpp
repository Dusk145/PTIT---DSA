#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <bool>> ok(200, vector <bool> (200, true));
int dx[8] = {- 1, - 1, - 1, 0, 0, 1, 1, 1};
int dy[8] = {- 1, 0, 1, - 1, 1, - 1, 0, 1};

void dfs(int i, int j, int n, int m){
    ok[i][j] = true;
    for (int k = 0; k < 8; ++k){
        int x = i + dx[k];
        int y = j + dy[k];
        if (x >= 0 && x < n && y >= 0 && y < m && !ok[x][y]){
            dfs(x, y, n, m);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            char x;
            cin >> x;
            if (x == 'W'){
                ok[i][j] = false;
            }
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            if (!ok[i][j]){
                dfs(i, j, n, m);
                ++cnt;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}