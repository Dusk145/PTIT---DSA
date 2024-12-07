#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <int>> a(2000);
vector <bool> ok(2000, true);
vector <pair <int, int>> b;

void bfs(int x){
    queue <int> c;
    c.push(x);
    ok[x] = false;
    while (!c.empty()){
        int temp = c.front();
        c.pop();
        for (auto i : a[temp]){
            if (ok[i]){
                b.push_back({temp, i});
                c.push(i);
                ok[i] = false;
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
        int n, m, k;
        cin >> n >> m >> k;
        for (int i = 0; i < m; ++i){
            int x, y;
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        bfs(k);
        if (b.size() == n - 1){
            for (auto i : b){
                cout << i.first << " " << i.second << endl;
            }
        } else {
            cout << "-1\n";
        }
        for (int i = 1; i <= n; ++i){
            a[i].clear();
        }
        fill(ok.begin(), ok.end(), true);
        b.clear();
    }
    return 0;
}