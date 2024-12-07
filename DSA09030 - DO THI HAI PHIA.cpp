#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <int>> a(2000);

bool bfs(int n){
    vector <int> ok(n + 1, - 1);
    for (int i = 1; i <= n; ++i){
        if (ok[i] == - 1){
            queue <int> b;
            b.push(i);
            ok[i] = 0;
            while (!b.empty()){
                int temp = b.front();
                b.pop();
                for (auto j : a[temp]){
                    if (ok[j] == - 1){
                        ok[j] = (ok[temp] == 1) ? 0 : 1;
                        b.push(j);
                    } else if (ok[j] == ok[temp]){
                        return false;
                    }
                }
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
        for (int i = 0; i < m; ++i){
            int x, y;
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        if (bfs(n)){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
        for (int i = 1; i <= n; ++i){
            a[i].clear();
        }
    }
    return 0;
}