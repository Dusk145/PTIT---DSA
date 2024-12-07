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
        vector <int> a(n), b(n);
        for (int i = 0; i < n; ++i){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b.begin(), b.end());
        vector <int> c;
        for (int i = 0; i < n; ++i){
            if (a[i] != b[i]){
                c.push_back(i + 1);
            }
        }
        cout << c[0] << " " << c[c.size() - 1] << endl;
    }
    return 0;
}