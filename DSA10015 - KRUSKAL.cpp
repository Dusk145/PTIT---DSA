#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

struct edge{
    int x, y, z;
};

vector <edge> a;
vector <int> par, sz;

int find_par(int x){
    if (x != par[x]){
        par[x] = find_par(par[x]);
    }
    return par[x];
}

bool union_(int x, int y){
    x = find_par(x);
    y = find_par(y);
    if (x == y){
        return false;
    }
    if (sz[x] < sz[y]){
        swap(x, y);
    }
    par[y] = x;
    sz[x] += sz[y];
    return true;
}

bool cmp(edge x, edge y){
    return x.z < y.z;
}

void kruskal(int n, int m){
    vector <edge> temp;
    int cnt = 0;
    sort(a.begin(), a.end(), cmp);
    for (int i = 0; i < m; ++i){
        if (temp.size() == n - 1){
            break;
        }
        edge x = a[i];
        if (union_(x.x, x.y)){
            temp.push_back(x);
            cnt += x.z;
        }
    }
    cout << cnt << endl;
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
            int x, y, z;
            cin >> x >> y >> z;
            a.push_back({x, y, z});
        }
        for (int i = 0; i <= n; ++i){
            par.push_back(i);
            sz.push_back(1);
        }
        kruskal(n, m);
        a.clear();
        par.clear();
        sz.clear();
    }
    return 0;
}