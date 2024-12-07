#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        vector <vector <int>> a(n + 1, vector <int> (m + 1));
        for (int i = 1; i <= n; ++i){
            for (int j = 1; j <= m; ++j){
                cin >> a[i][j];
            }
        }
        vector <vector <int>> cnt(n + 1, vector <int> (m + 1, 0));
        vector <vector <bool>> ok(n + 1, vector <bool> (m + 1, true));
        queue <pair <int, int>> b;
        b.push(make_pair(1, 1));
        cnt[1][1] = 0;
        bool check = true;
        while (b.size()){
            int x = b.front().first;
            int y = b.front().second;
            if (x == n && y == m){
                cout << cnt[x][y] << endl;
                check = false;
                break;
            }
            int temp = a[x][y];
            if (x + temp <= n && ok[x + temp][y]){
                cnt[x + temp][y] = cnt[x][y] + 1;
                ok[x + temp][y] = false;
                b.push(make_pair(x + temp, y));
            }
            if (temp + y <= m && ok[x][temp + y]){
                cnt[x][temp + y] = cnt[x][y] + 1;
                ok[x][temp + y] = false;
                b.push(make_pair(x, y + temp));
            }
            b.pop();
        }
        if (check){
            cout << "-1\n";
        }
    }
    return 0;
}