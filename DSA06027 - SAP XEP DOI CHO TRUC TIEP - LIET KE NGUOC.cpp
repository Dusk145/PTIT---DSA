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
        vector <vector <int>> b(n - 1, vector <int> (n));
        for (int i = 0; i < n - 1; ++i){
            for (int j = i + 1; j < n; ++j){
                if (a[i] > a[j]){
                    swap(a[i], a[j]);
                }
            }
            for (int j = 0; j < n; ++j){
                b[i][j] = a[j];
            }
        }
        for (int i = n - 2; i >= 0; --i){
            cout << "Buoc " << i + 1 << ": ";
            for (int j = 0; j < n; ++j){
                cout << b[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}