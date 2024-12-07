#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <int>> a(2000);
vector <int> color(2000, 0);

bool dfs(int x){
    color[x] = 1;
    for (int i = 0; i < a[x].size(); ++i){
        if (color[a[x][i]] == 0){
            if (dfs(a[x][i])){
                return true;
            }
        } else if (color[a[x][i]] == 1){
            return true;
        }
    }
    color[x] = 2;
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
        }
        bool flag = true;
        for (int i = 1; i <= n; ++i){
            if (color[i] == 0 && dfs(i)){
                cout << "YES\n";
                flag = false;
                break;
            }
        }
        if (flag){
            cout << "NO\n";
        }
        for (int i = 1; i <= n; ++i){
            a[i].clear();
        }
        fill(color.begin(), color.end(), 0);
    }
    return 0;
}