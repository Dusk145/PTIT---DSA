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
        if (a[0] == a[n - 1]){
            cout << "-1\n";
        } else {
            cout << a[0] << " ";
            for (int i = 1; i < n; ++i){
                if (a[i] != a[0]){
                    cout << a[i] << endl;
                    break;
                }
            }
        }
    }
    return 0;
}