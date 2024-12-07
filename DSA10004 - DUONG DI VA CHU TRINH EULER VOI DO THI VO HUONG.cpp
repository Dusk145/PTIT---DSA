#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        vector <vector <int>> a(n + 1);
        for (int i = 0; i < m; ++i){
            int x, y;
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        int cnt_even = 0, cnt_odd = 0;
        for (int i = 1; i <= n; ++i){
            if (a[i].size() % 2 == 0){
                if (a[i].size()){
                    ++cnt_even;
                }
            } else {
                ++cnt_odd;
            }
        }
        if (cnt_even == n){
            cout << "2";
        } else if (cnt_odd == 2){
            cout << "1";
        } else {
            cout << "0";
        }
        cout << endl;
    }
    return 0;
}