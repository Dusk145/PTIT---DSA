#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <int>> a(100);
vector <vector <bool>> ok(100, vector <bool> (100, true));
int maxi = INT_MIN;

void res(int x, int cnt){
    maxi = max(maxi, cnt);
    for (int i = 0; i < a[x].size(); ++i){
        if (ok[x][a[x][i]]){
            ok[x][a[x][i]] = ok[a[x][i]][x] = false;
            res(a[x][i], cnt + 1);
            ok[x][a[x][i]] = ok[a[x][i]][x] = true;
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
        for (int i = 0; i < m; ++i){
            int x, y;
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        for (int i = 0; i < n; ++i){
            res(i, 0);
            for (int j = 0; j < n; ++j){
                fill(ok[j].begin(), ok[j].end(), true);
            }
        }
        cout << maxi << endl;
        for (int i = 0; i < n; ++i){
            a[i].clear();
        }
        maxi = INT_MIN;
    }
    return 0;
}