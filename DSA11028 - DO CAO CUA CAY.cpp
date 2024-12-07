#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <int>> a(200000);
vector <bool> ok(200000, true);
int maxi = 0;

void dfs(int x, int cnt){
    maxi = max(maxi, cnt);
    ok[x] = false;
    for (auto i : a[x]){
        if (ok[i]){
            dfs(i, cnt + 1);
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
        }
        dfs(1, 0);
        cout << maxi << endl;
        for (int i = 1; i <= n; ++i){
            a[i].clear();
        }
        fill(ok.begin(), ok.end(), true);
        maxi = 0;
    }
    return 0;
}