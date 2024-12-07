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
        for (int i = 0; i <= n - k; ++i){
            auto it = max_element(a.begin() + i, a.begin() + i + k);
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}