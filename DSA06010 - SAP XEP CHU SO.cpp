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
        set <int> a;
        for (int i = 0; i < n; ++i){
            int x;
            cin >> x;
            while (x){
                a.insert(x % 10);
                x /= 10;
            }
        }
        for (auto x : a){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}