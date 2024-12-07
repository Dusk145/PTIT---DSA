#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <int>> a(100);
vector <int> ok(100, 0);

bool check(int x, int color){
    for (auto i : a[x]){
        if (ok[i] == color){
            return false;
        }
    }
    return true;
}

bool res(int n, int k, int idx){
    if (idx > n){
        return true;
    }
    for (int i = 1; i <= k; ++i){
        if (check(idx, i)){
            ok[idx] = i;
            if (res(n, k, idx + 1)){
                return true;
            }
        }
    }
    return false;
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
        if (res(n, k, 1)){
            cout << "YES\n"; 
        } else {
            cout << "NO\n";
        }
        for (int i = 1; i <= n; ++i){
            a[i].clear();
        }
        fill(ok.begin(), ok.end(), 0);
    }
    return 0;
}