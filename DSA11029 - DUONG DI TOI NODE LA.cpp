#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <int>> a(2000);
vector <int> b;
vector <string> c;
vector <bool> ok(2000, true);

void dfs(int x){
    ok[x] = false;
    if (a[x].empty()){
        string temp = "1";
        for (int i = 0; i < b.size(); ++i){
            temp += (" " + to_string(b[i]));
        }
        c.push_back(temp);
        return;
    }
    for (auto i : a[x]){
        b.push_back(i);
        if (ok[i]){
            dfs(i);
        }
        b.pop_back();
    }
    ok[x] = true;
}

bool cmp(string a, string b){
    int posa = a.find_last_of(" ");
	int posb = b.find_last_of(" ");
	return stoi(a.substr(posa, 10000)) < stoi(b.substr(posb, 10000));
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
        dfs(1);
        sort(c.begin(), c.end(), cmp);
        for (auto i : c){
            cout << i << endl;
        }
        for (int i = 1; i <= n; ++i){
            a[i].clear();
        }
        b.clear();
        c.clear();
        fill(ok.begin(), ok.end(), true);
    }
    return 0;
}