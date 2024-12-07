#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <int>> a(1000, vector <int> (1000));
int dx[8] = {- 1, - 1, - 1, 0, 0, 1, 1, 1};
int dy[8] = {- 1, 0, 1, - 1, 1, - 1, 0, 1};

void res(int i, int j, int n, int m){
    a[i][j] = 0;
    for (int k = 0; k < 8; ++k){
        int x = i + dx[k];
        int y = j + dy[k];
        if (x >= 0 && y >= 0 && x < n && y < m && a[x][y] == 1){
            res(x, y, n, m);
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
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < m; ++j){
                cin >> a[i][j];
            }
        }
        int cnt = 0;
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < m; ++j){
                if (a[i][j] == 1){
                    res(i, j, n, m);
                    ++cnt;
                }
            }
        }
        cout << cnt << endl;
        for (int i = 0; i < n; ++i){
            a[i].clear();
        }
    }
    return 0;
}