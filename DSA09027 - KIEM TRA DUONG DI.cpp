#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <int>> a(2000);
vector <bool> ok(2000, true);
bool check = true;

void res(int x, int y){
    ok[x] = false;
    if (x == y){
        check = false;
        return;
    }
    for (int i = 0; i < a[x].size(); ++i){
        if (ok[a[x][i]]){
            res(a[x][i], y);
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
        int q;
        cin >> q;
        for (int i = 0; i < q; ++i){
            int x, y;
            cin >> x >> y;
            res(x, y);
            if (check){
                cout << "NO\n";
            } else {
                cout << "YES\n";
            }
            fill(ok.begin(), ok.end(), true);
            check = true;
        }
        for (int i = 1; i <= n; ++i){
            a[i].clear();
        }
    }
    return 0;
}