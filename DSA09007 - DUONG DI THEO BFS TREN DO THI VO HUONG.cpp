#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <int>> a(2000);
vector <bool> ok(2000, true);
bool check = true;

void res(int x, int y){
    vector <string> b(2000);
    b[x] = to_string(x);
    queue <int> c;
    c.push(x);
    ok[x] = false;
    while (!c.empty() && check){
        int n = c.front();
        c.pop();
        for (int i = 0; i < a[n].size(); ++i){
            if (ok[a[n][i]]){
                b[a[n][i]] = b[n] + " " + to_string(a[n][i]);
                if (a[n][i] == y){
                    check = false;
                    break;
                }
                c.push(a[n][i]);
                ok[a[n][i]] = false;
            }
        }
    }
    if (check){
        cout << "-1\n";
    } else {
        cout << b[y] << endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        for (int i = 0; i < m; ++i){
            int u, v;
            cin >> u >> v;
            a[u].push_back(v);
            a[v].push_back(u);
        }
        res(x, y);
        for (int i = 1; i <= n; ++i){
            a[i].clear();
        }
        fill(ok.begin(), ok.end(), true);
        check = true;
    }
    return 0;
}