#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <bool>> a(200, vector <bool> (200));
int cnt = 0;
int dx[2] = {1, 0};
int dy[2] = {0, 1};

void res(int i, int j, int n, int m){
    a[i][j] = false;
    for (int k = 0; k < 2; ++k){
        int x = i + dx[k];
        int y = j + dy[k];
        if (x >= 0 && x < n && y >= 0 && y < m && a[x][y] == true){
            if (x == n - 1 && y == m - 1){
                ++cnt;
            } else {
                res(x, y, n, m);
            }
            a[x][y] = true;
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
                int x;
                cin >> x;
                a[i][j] = true;
            }
        }
        cnt = 0;
        res(0, 0, n, m);
        cout << cnt << endl;
    }
    return 0;
}