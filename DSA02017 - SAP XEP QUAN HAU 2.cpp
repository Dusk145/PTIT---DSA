#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <int>> a(10, vector <int> (10));
vector <bool> xuoi(20, true), nguoc(20, true), ok(10, true);
int maxi = INT_MIN;

void res(int i, int S){
    for (int j = 1; j <= 8; ++j){
        if (ok[j] && xuoi[i - j + 8] && nguoc[i + j - 1]){
            ok[j] = xuoi[i - j + 8] = nguoc[i + j - 1] = false;
            if (i == 8){
                maxi = max(maxi, S + a[i][j]);
            } else {
                res(i + 1, S + a[i][j]);
            }
            ok[j] = xuoi[i - j + 8] = nguoc[i + j - 1] = true;
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
        for (int i = 1; i <= 8; ++i){
            for (int j = 1; j <= 8; ++j){
                cin >> a[i][j];
            }
        }
        res(1, 0);
        cout << maxi << endl;
        fill(xuoi.begin(), xuoi.end(), true);
        fill(nguoc.begin(), nguoc.end(), true);
        fill(ok.begin(), ok.end(), true);
        maxi = INT_MIN;
    }
    return 0;
}