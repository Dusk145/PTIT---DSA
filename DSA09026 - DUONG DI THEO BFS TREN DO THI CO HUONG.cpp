#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <int>> a(2000);
vector <bool> ok(2000, true);
vector <string> b(2000, "");
bool check = true;

void res(int x, int y){
    queue <int> c;
    c.push(x);
    b[x] = to_string(x);
    while (!c.empty()){
        int n = c.front();
        c.pop();
        ok[n] = false;
        for (int i = 0; i < a[n].size(); ++i){
            if (ok[a[n][i]]){
                ok[a[n][i]] = false;
                if (a[n][i] == y){
                    check = false;
                }
                b[a[n][i]] = b[n] + " " + to_string(a[n][i]);
                c.push(a[n][i]);
            }
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
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        for (int i = 0; i < m; ++i){
            int u, v;
            cin >> u >> v;
            a[u].push_back(v);
        }
        res(x, y);
        if (check){
            cout << "-1\n";
        } else {
            cout << b[y] << endl;
        }
        for (int i = 1; i <= n; ++i){
            a[i].clear();
        }
        fill(ok.begin(), ok.end(), true);
        fill(b.begin(), b.end(), "");
        check = true;
    }
    return 0;
}