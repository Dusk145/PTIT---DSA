#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    vector <vector <int>> b(n - 1, vector <int> (n));
    for (int i = 0; i < n - 1; ++i){
        auto it = min_element(a.begin() + i, a.end());
        swap(a[i], *it);
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
    return 0;
}