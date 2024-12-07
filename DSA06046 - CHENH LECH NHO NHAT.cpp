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
        sort(a.begin(), a.end());
        int mini = 1e9;
        for (int i = 0; i < n - 1; ++i){
            if (a[i + 1] - a[i] < mini){
                mini = a[i + 1] - a[i];
            }
        }
        cout << mini << endl;
    }
    return 0;
}