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
        int Sr = 0;
        for (int i = 0; i < n; ++i){
            cin >> a[i];
            Sr += a[i];
        }
        int Sl = 0;
        bool ok = true;
        for (int i = 0; i < n; ++i){
            Sl += a[i];
            if (Sl == Sr - Sl + a[i]){
                cout << i + 1 << endl;
                ok = false;
                break;
            }
        }
        if (ok){
            cout << "-1\n";
        }
    }
    return 0;
}