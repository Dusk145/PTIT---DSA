#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <int>> a(2000);
vector <bool> ok(2000, false);

void res(int x){
    cout << x << " ";
    ok[x] = true;
    for (int i = 0; i < a[x].size(); ++i){
        if (!ok[a[x][i]]){
            res(a[x][i]);
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
        int n, m, k;
        cin >> n >> m >> k;
        for (int i = 0; i < m; ++i){
            int x, y;
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        res(k);
        cout << endl;
        for (int i = 0; i <= n; ++i){
            a[i].clear();
        }
        fill(ok.begin(), ok.end(), false);
    }
    return 0;
}