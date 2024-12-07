#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <int>> a(20, vector <int> (20));
vector <bool> ok(20, true);
int mini = INT_MAX, idx;

void res(int i, int n, int cnt, int temp)[
    if (cnt > mini){
        return;
    }
    for (int j = 1; j < n; ++j){
        if (ok[j]){
            ok[j] = false;
            res(j, n, cnt + a[i][j], temp + 1);
        }
    }
]

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
        res(0, 0, n, 0);
    }
    return 0;
}