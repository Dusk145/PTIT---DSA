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
        map <int, int> a;
        for (int i = 0; i < n; ++i){
            int x;
            cin >> x;
            ++a[x];
        }
        cout << a[0] << endl;
    }
    return 0;
}