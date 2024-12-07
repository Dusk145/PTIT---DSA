#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <int>> a(2000);
vector <bool> ok(2000, true);
vector <int> b;

bool dfs(int x, int par){
    b.push_back(x);
    ok[x] = false;
    for (int i = 0; i < a[x].size(); ++i){
        if (ok[a[x][i]]){
            if (dfs(a[x][i], x)){
                return true;
            } 
        } else if (a[x][i] != par && a[x][i] == 1){
            return true;
        }
    }
    b.pop_back();
    return false;
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
            sort(a[i].begin(), a[i].end());
        }
        if (dfs(1, 0)){
            for (int i = 0; i < b.size(); ++i){
                cout << b[i] << " ";
            }
            cout << "1\n";
        } else {
            cout << "NO\n";
        }
        for (int i = 1; i <= n; ++i){
            a[i].clear();
        }
        fill(ok.begin(), ok.end(), true);
        b.clear();
    }
    return 0;
}