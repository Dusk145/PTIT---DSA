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
        int x, y;
        bool ok = true;
        for (int i = 2; i <= n / 4; ++i){
            if (7 * i >= n && (7 * i - n) % 3 == 0){
                x = (7 * i - n) / 3;
                y = i - x;
                ok = false;
                break;
            }
        }
        if (ok){
            cout << "-1\n";
        } else {
            for (int i = 0; i < x; ++i){
                cout << "4";
            }
            for (int i = 0; i < y; ++i){
                cout << "7";
            }
            cout << endl;
        }
    }
    return 0;
}