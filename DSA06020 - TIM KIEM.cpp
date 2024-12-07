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
        auto it = find(a.begin(), a.end(), k);
        if (it != a.end()){
            cout << "1\n";
        } else {
            cout << "-1\n";
        }
    }
    return 0;
}