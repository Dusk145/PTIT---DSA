#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <string> a, c;
vector <vector <char>> b(10, vector <char> (10));
vector <vector <bool>> ok(10, vector <bool> (10, true));
int dx[8] = {- 1, - 1, - 1, 0, 0, 1, 1, 1};
int dy[8] = {- 1, 0, 1, - 1, 1, - 1, 0, 1};

void res(int i, int j, int n, int m, string temp, int end){
    for (int k = 0; k < end; ++k){
        if (temp == a[k]){
            c.push_back(temp);
        }
    }
    for (int k = 0; k < 8; ++k){
        int x = i + dx[k];
        int y = j + dy[k];
        if (x >= 0 && x < n && y >= 0 && y < m && ok[x][y]){
            ok[x][y] = false;
            res(x, y, n, m, temp + b[x][y], end);
            ok[x][y] = true;
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
        int k, n, m;
        cin >> k >> n >> m;
        for (int i = 0; i < k; ++i){
            string temp;
            cin >> temp;
            a.push_back(temp);
        }
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < m; ++j){
                cin >> b[i][j];
            }
        }
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < m; ++j){
                ok[i][j] = false;
                res(i, j, n, m, string(1, b[i][j]), k);
                for (int k = 0; k < n; ++k){
                    fill(ok[k].begin(), ok[k].begin() + m, true);
                }
            }
        }
        if (c.empty()){
            cout << "-1\n";
        } else {
            for (int i = 0; i < c.size(); ++i){
                cout << c[i] << " ";
            }
            cout << endl;
        }
        a.clear();
        c.clear();
    }
    return 0;
}