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
            if (a[i] == n){
                if (i + 1 == n){
                    cout << "0\n";
                } else {
                    cout << i + 1 << endl;
                }
            }
        }
    }
    return 0;
}