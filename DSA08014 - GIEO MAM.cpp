#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <int>> a(600, vector <int> (600));
int dx[4] = {0, - 1, 0, 1};
int dy[4] = {- 1, 0, 1, 0};

bool check(int n, int m){
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            if (a[i][j] == 1){
                return false;
            }
        }
    }
    return true;
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
        queue <pair <int, int>> b;
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < m; ++j){
                cin >> a[i][j];
                if (a[i][j] == 2){
                    b.push({i, j});
                }
            }
        }
        int cnt = 0;
        while (!b.empty()){
            int temp = b.size();
            bool flag = true;
            for (int i = 0; i < temp; ++i){
                int x = b.front().first;
                int y = b.front().second;
                b.pop();
                for (int k = 0; k < 4; ++k){
                    int u = x + dx[k];
                    int v = y + dy[k];
                    if (u >= 0 && u < n && v >= 0 && v < m && a[u][v] == 1){
                        a[u][v] = 2;
                        b.push({u, v});
                        flag = false;
                    }
                }
            }
            if (!flag){
                ++cnt;
            }
        }
        if (check(n, m)){
            cout << cnt << endl;
        } else {
            cout << "-1\n";
        }
    }
    return 0;
}