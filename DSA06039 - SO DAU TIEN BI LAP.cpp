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
        vector <int> a(n);
        for (int i = 0; i < n; ++i){
            cin >> a[i];
        }
        bool ok = true;
        for (int i = 0; i < n - 1; ++i){
            auto it = find(a.begin() + i + 1, a.end(), a[i]);
            if (it != a.end()){
                cout << a[i] << endl;
                ok = false;
                break;
            }
        }
        if (ok){
            cout << "NO\n";
        }
    }
    return 0;
}