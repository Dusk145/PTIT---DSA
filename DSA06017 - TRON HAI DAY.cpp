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
        multiset <int> a;
        for (int i = 0; i < n + m; ++i){
            int x;
            cin >> x;
            a.insert(x);
        }
        for (auto x : a){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}