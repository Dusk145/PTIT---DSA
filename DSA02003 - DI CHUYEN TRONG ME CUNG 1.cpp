#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <int>> a(100, vector <int> (100));
vector <char> b(1000000); 
int dx[2] = {1, 0};
int dy[2] = {0, 1};
char dz[2] = {'D', 'R'};
bool ok = true;

void res(int i, int j, int n, int idx){
    a[i][j] = 0;
    for (int k = 0; k < 2; ++k){
        int x = i + dx[k];
        int y = j + dy[k];
        if (x >= 0 && y >= 0 && x < n && y < n && a[x][y] == 1){
            b[idx] = dz[k];
            if (x == n - 1 && y == n - 1){
                for (int l = 0; l <= idx; ++l){
                    cout << b[l];
                }
                cout << " ";
                ok = false;
            } else {
                res(x, y, n, idx + 1);
            }
            a[x][y] = 1;
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
        ok = true;
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < n; ++j){
                cin >> a[i][j];
            }
        }
        if (a[0][0] == 1){
            res(0, 0, n, 0);
            if (ok){
                cout << "-1";
            }
        } else {
            cout << "-1";
        }
        cout << endl;
    }
    return 0;
}