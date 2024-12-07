#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector <vector <int>> a(n + 1, vector <int> (n + 1, 1e9));
    for (int i = 1; i <= n; ++i){
        a[i][i] = 0;
    }
    for (int i = 0; i < m; ++i){
        int x, y, z;
        cin >> x >> y >> z;
        a[x][y] = a[y][x] = z;
    }
    for (int k = 1; k <= n; ++k){
        for (int i = 1; i <= n; ++i){
            for (int j = 1; j <= n; ++j){
                a[i][j] = min(a[i][j], a[i][k] + a[k][j]);
            }
        }
    }
    int t;
    cin >> t;
    while (t--){
        int x, y;
        cin >> x >> y;
        cout << a[x][y] << endl;
    }
    return 0;
}