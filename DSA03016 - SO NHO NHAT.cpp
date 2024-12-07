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
        int x, n;
        cin >> x >> n;
        vector <int> a(n, 0);
        if (x > 9 * n){
            cout << "-1\n";
        } else {
            a[0] = 1;
            --x;
            for (int i = n - 1; i >= 0; --i){
                if (x <= 9){
                    a[i] += x;
                    break;
                } else {
                    a[i] = 9;
                    x -= 9;
                }
            }
            for (int i = 0; i < n; ++i){
                cout << a[i];
            }
            cout << endl;
        }
    }
    return 0;
}