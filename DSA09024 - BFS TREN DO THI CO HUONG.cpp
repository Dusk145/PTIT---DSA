#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <int>> a(2000);
vector <bool> ok(2000, false);

void res(int x){
    queue <int> b;
    vector <int> c;
    b.push(x);
    ok[x] = true;
    while (!b.empty()){
        int temp = b.front();
        c.push_back(temp);
        b.pop();
        for (int i = 0; i < a[temp].size(); ++i){
            if (!ok[a[temp][i]]){
                b.push(a[temp][i]);
                ok[a[temp][i]] = true;
            }
        }
    }
    for (int i = 0; i < c.size(); ++i){
        cout << c[i] << " ";
    }
    cout << endl;
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
        }
        for (int i = 1; i <= n; ++i){
            sort(a[i].begin(), a[i].end());
        }
        res(k);
        for (int i = 1; i <= n; ++i){
            a[i].clear();
        }
        fill(ok.begin(), ok.end(), false);
    }
    return 0;
}