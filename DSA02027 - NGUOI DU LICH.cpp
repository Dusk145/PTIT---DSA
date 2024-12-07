#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <int>> a(20, vector <int> (20));
vector <bool> ok(20, true);
int mini = INT_MAX;

void res(int end, int cnt, int idx, int S){
    if (cnt == end - 1){
        mini = min(mini, S + a[idx][0]);
        return;
    } else if (S > mini){
        return;
    }
    for (int i = 1; i < end; ++i){
        if (ok[i]){
            ok[i] = false;
            res(end, cnt + 1, i, S + a[idx][i]);
            ok[i] = true;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            cin >> a[i][j];
        }
    }
    res(n, 0, 0, 0);
    cout << mini << endl;
    return 0;
}