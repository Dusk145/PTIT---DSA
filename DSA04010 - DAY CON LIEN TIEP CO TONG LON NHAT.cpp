#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >>  t;
    while (t--){
        int n;
        cin >> n;
        int S = 0, maxi = - 1e9;
        for (int i = 0; i < n; ++i){
            int x;
            cin >> x;
            S += x;
            if (S > maxi){
                maxi = S;
            } 
            if (S < 0){
                S = 0;
            }
        }
        cout << maxi << endl;
    }
    return 0;
}