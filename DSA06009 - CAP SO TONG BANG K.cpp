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
        vector <int> a(n);
        for (int i = 0; i < n; ++i){
            cin >> a[i];
        }
        int cnt = 0;
        for (int i = 0; i < n; ++i){
            for (int j = i + 1; j < n; ++j){
                if (a[i] + a[j] == k){
                    ++cnt;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}