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
        int n, k;
        cin >> n >> k;
        int cnt = 0;
        for (int i = 0; i < n; ++i){
            int x;
            cin >> x;
            if (x == k){
                ++cnt;
            }
        }
        if (cnt == 0){
            cnt = - 1;
        }
        cout << cnt << endl;
    }
    return 0;
}