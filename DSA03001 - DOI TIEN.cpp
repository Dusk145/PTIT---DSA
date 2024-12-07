#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <int> a({1000, 500, 200, 100, 50, 20, 10, 5, 2, 1});
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int idx = 0, cnt = 0;
        while (n){
            if (n >= a[idx]){
                int temp = n / a[idx];
                n -= temp * a[idx];
                cnt += temp;
            } else {
                ++idx;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}