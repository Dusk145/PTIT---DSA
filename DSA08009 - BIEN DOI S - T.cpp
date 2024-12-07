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
        queue <pair <int, int>> a;
        a.push(make_pair(n, 0));
        vector <bool> ok(1000000, true);
        while (a.size()){
            int temp = a.front().first;
            int cnt = a.front().second;
            if (temp == m){
                cout << cnt << endl;
                break;
            }
            if (ok[temp]){
                ok[temp] = false;
                if (temp > 1){
                    a.push(make_pair(temp - 1, cnt + 1));
                }
                if (temp < m){
                    a.push(make_pair(temp * 2, cnt + 1));
                }
            }
            a.pop();
        }
    }
    return 0;
}