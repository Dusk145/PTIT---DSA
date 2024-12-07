#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <char>> a(600, vector <char> (600));
vector <vector <bool>> ok(600, vector <bool> (600, true));
int dx[4] = {- 1, 0, 0, 1};
int dy[4] = {0, - 1, 1, 0};
bool flag = true;

void dfs(int i, int j, int n, int m, int pre, int cnt){
    if (a[i][j] == 'T' && cnt <= 3){
        flag = false;
        return;
    }
    if (!flag || cnt > 3){
        return;
    }
    ok[i][j] = false;
    for (int k = 0; k < 4; ++k){
        int x = i + dx[k];
        int y = j + dy[k];
        if (x >= 0 && x < n && y >= 0 && y < m && ok[x][y]){
            if (k != pre){
                dfs(x, y, n, m, k, cnt + 1);
            } else {
                dfs(x, y, n, m, k, cnt);
            }
        }
    }
    ok[i][j] = true;
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
        int x, y;
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < m; ++j){
                cin >> a[i][j];
                if (a[i][j] == '*'){
                    ok[i][j] = false;
                } else {
                    ok[i][j] = true;
                }
                if (a[i][j] == 'S'){
                    x = i;
                    y = j;
                }
            }
        }
        dfs(x, y, n, m, - 1, 0);
        if (flag){
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
        flag = true;
    }
    return 0;
}