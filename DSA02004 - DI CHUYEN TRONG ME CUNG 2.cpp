#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <int>> a(10, vector <int> (10));
int dx[4] = {0, - 1, 0, 1};
int dy[4] = {- 1, 0, 1, 0};
char dz[4] = {'L', 'U', 'R', 'D'};
vector <string> b;
string temp = "";

void res(int i, int j, int n){
    if (i == n - 1 && j == n - 1){
        b.push_back(temp);
        return;
    }
    a[i][j] = 0;
    for (int k = 0; k < 4; ++k){
        int x = i + dx[k];
        int y = j + dy[k];
        if (x >= 0 && y >= 0 && x < n && y < n && a[x][y] == 1){
            temp.push_back(dz[k]);
            res(x, y, n);
            temp.pop_back();
        }
    }
    a[i][j] = 1;
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
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < n; ++j){
                cin >> a[i][j];
            }
        }
        if (a[0][0] == 1){
            res(0, 0, n);
            if (b.size() == 0){
                cout << "-1\n";
            } else {
                sort(b.begin(), b.end());
                for (int i = 0; i < b.size(); ++i){
                    cout << b[i] << " ";
                }
                cout << endl;
            }
        } else {
            cout << "-1\n";
        }
        b.clear();
        temp = "";
    }
    return 0;
}