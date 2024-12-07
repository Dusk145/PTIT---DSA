#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <bool> a(30, true), Xuoi(30, true), Nguoc(30, true);
int cnt = 0;

void res(int i, int n){
    for (int j = 1; j <= n; ++j){
        if (a[j] && Xuoi[i - j + n] && Nguoc[i + j - 1]){
            a[j] = Xuoi[i - j + n] = Nguoc[i + j - 1] = false;
            if (i == n){
                ++cnt;
            } else {
                res(i + 1, n);
            }
            a[j] = Xuoi[i - j + n] = Nguoc[i + j - 1] = true;
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
        int n;
        cin >> n;
        res(1, n);
        cout << cnt << endl;
        cnt = 0;
    }
    return 0;
}