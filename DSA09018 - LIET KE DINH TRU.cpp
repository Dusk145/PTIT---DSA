#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <int>> a(2000);
vector <int> ok(2000, true);

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
            a[y].push_back(x);
        }
        int cnt_tplt = 0;
        for (int i = 1; i <= n; ++i){
            if (ok[i]){
                dfs(i);
                ++cnt_tplt;
            }
        }
        for (int i = 1; i <= n; ++i){
            int cnt = 0;
            fill(ok.begin(), ok.end(), true);
            ok[i] = false;
            for (int j = 1; j <= n; ++j){
                if (ok[j]){
                    dfs(j);
                    ++cnt;
                }
            }
            if (cnt > cnt_tplt){
                cout << i << " ";
            }
        }
        cout << endl;
        for (int i = 1; i <= n; ++i){
            a[i].clear();
        }
        fill(ok.begin(), ok.end(), true);
    }
    return 0;
}