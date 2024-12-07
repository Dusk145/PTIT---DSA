#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <int>> a(2000);
vector <bool> ok(2000, true);
string b = "";
bool check = true;

void res(int x, int y, string temp){
    ok[x] = false;
    if (x == y){
        check = false;
        b = temp;
    }
    if (!check){
        return;
    }
    for (int i = 0; i < a[x].size(); ++i){
        if (ok[a[x][i]]){
            res(a[x][i], y, temp + " " + to_string(a[x][i]));
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
            a[v].push_back(u);
        }
        res(x, y, to_string(x));
        if (check){
            cout << "-1\n";
        } else {
            cout << b << endl;
        }
        for (int i = 1; i <= n; ++i){
            a[i].clear();
        }
        fill(ok.begin(), ok.end(), true);
        b = "";
        check = true;
    }
    return 0;
}