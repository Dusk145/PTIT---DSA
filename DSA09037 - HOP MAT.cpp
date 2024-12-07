#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <int>> a(2000);
vector <bool> ok(2000, true);
vector <int> res(2000, 0);

void dfs(int x){
    ok[x] = false;
    ++res[x];
    for (auto i : a[x]){
        if (ok[i]){
            dfs(i);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int k, n, m;
    cin >> k >> n >> m;
    vector <int> b;
    for (int i = 0; i < k; ++i){
        int x;
        cin >> x;
        b.push_back(x);
    }
    for (int i = 0; i < m; ++i){
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
    }
    for (int i = 0; i < k; ++i){
        dfs(b[i]);
        fill(ok.begin(), ok.end(), true);
    }
    int cnt = 0;
    for (int i = 1; i <= n; ++i){
        if (res[i] == k){
            ++cnt;
        }
    }
    cout << cnt << endl;
    return 0;
}