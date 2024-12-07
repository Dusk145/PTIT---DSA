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
        int n, x;
        cin >> n >> x;
        for (int i = 0; i < n; ++i){
            int temp;
            cin >> temp;
            if (temp == x){
                cout << i + 1 << endl;
            }
        }
    }
    return 0;
}