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
        vector <vector <int>> b(n, vector <int> (n));
        int cnt = 0;
        for (int i = 0; i < n; ++i){
            bool ok = true;
            for (int j = 0; j < n - i - 1; ++j){
                if (a[j] > a[j + 1]){
                    swap(a[j], a[j + 1]);
                    ok = false;
                }
            }
            if (!ok){
                for (int j = 0; j < n; ++j){
                    b[i][j] = a[j];
                }
                ++cnt;
            } else {
                break;
            }
        }
        for (int i = cnt - 1; i >= 0; --i){
            cout << "Buoc " << i + 1 << ": ";
            for (int j = 0; j < n; ++j){
                cout << b[i][j] << " ";
            }
            cout << endl;   
        }
    }
    return 0;
}