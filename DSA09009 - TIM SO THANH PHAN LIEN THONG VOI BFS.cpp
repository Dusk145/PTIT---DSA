#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <int>> a(2000);
vector <bool> ok(2000, true);

void res(int x){
    queue <int> b;
    b.push(x);
    ok[x] = false;
    while (b.size()){
        int n = b.front();
        b.pop();
        for (int i = 0; i < a[n].size(); ++i){
            if (ok[a[n][i]]){
                b.push(a[n][i]);
                ok[a[n][i]] = false;
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
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < m; ++i){
            int x, y;
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        int cnt = 0;
        for (int i = 1; i <= n; ++i){
            if (ok[i]){
                res(i);
                ++cnt;
            }
        }
        cout << cnt << endl;
        for (int i = 1; i <= n; ++i){
            a[i].clear();
        }
        fill(ok.begin(), ok.end(), true);
    }
    return 0;
}