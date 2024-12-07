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
        int n;
        cin >> n;
        vector <int> a(n), b(n - 1);
        for (int i = 0; i < n; ++i){
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; ++i){
            cin >> b[i];
        }
        int idx1 = 0, idx2 = 0;
        while (idx1 < n && idx2 < n - 1){
            if (a[idx1] == b[idx2]){
                ++idx1;
                ++idx2;
            } else {
                cout << (int)(a[idx1] > b[idx2] ? idx1 : idx2) + 1 << endl;
                break;
            }
        }
    }
    return 0;
}