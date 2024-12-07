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
    vector <vector <int>> a(n, vector <int> (n));
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            cin >> a[i][j];
            if (a[i][j] == 1){
                cout << j + 1 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}