#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <int>> a(2000);
vector <bool> ok(2000, true);

void dfs(int x){
    ok[x] = false;
    for (auto i : a[x]){
        if (ok[i]){
            dfs(i);
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
        }
        bool flag = true;
        for (int i = 1; i <= n; ++i){
            int cnt = 0;
            dfs(i);
            for (int j = 1; j <= n; ++j){
                if (!ok[j]){
                    ++cnt;
                }
            }
            if (cnt != n){
                cout << "NO\n";
                flag = false;
                break;
            }
            fill(ok.begin(), ok.end(), true);
        }
        if (flag){
            cout << "YES\n";
        }
        for (int i = 1; i <= n; ++i){
            a[i].clear();
        }
        fill(ok.begin(), ok.end(), true);
    }
    return 0;
}