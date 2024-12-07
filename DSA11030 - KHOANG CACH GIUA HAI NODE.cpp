#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <int>> a(2000);
vector <bool> ok(2000, true);

void dfs(int x, int y, int cnt){
    ok[x] = false;
    if (x == y){
        cout << cnt << endl;
        return;
    }
    for (auto i : a[x]){
        if (ok[i]){
            dfs(i, y, cnt + 1);
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
        int n;
        cin >> n;
        for (int i = 0; i < n - 1; ++i){
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
            dfs(x, y, 0);
            fill(ok.begin(), ok.end(), true);
        }
        for (int i = 1; i <= n; ++i){
            a[i].clear();
        }

    }
    return 0;
}