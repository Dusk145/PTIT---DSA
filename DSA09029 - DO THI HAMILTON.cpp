#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <int>> a(100);
vector <bool> ok(100, true);
vector <int> b;
bool flag = true;

void dfs(int x, int n, int cnt){
    if (cnt == n){
        flag = false;
        return;
    }
    if (!flag){
        return;
    }
    ok[x] = false;
    for (auto i : a[x]){
        if (ok[i]){
            dfs(i, n, cnt + 1);
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
        for (int i = 1; i <= n; ++i){
            dfs(i, n, 1);
            fill(ok.begin(), ok.end(), true);
            if (!flag){
                cout << "1\n";
                break;
            }
        }
        if (flag){
            cout << "0\n";
        }
        for (int i = 1; i <= n; ++i){
            a[i].clear();
        }
        flag = true;
    }
    return 0;
}