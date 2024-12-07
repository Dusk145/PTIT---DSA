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
    cin.ignore();
    while (t--){
        string a;
        getline(cin, a);
        string res = string(1, a[0]);
        for (int i = 1; i < a.length(); ++i){
            if (a[i] == a[i - 1]){
                res += '0';
            } else {
                res += '1';
            }
        }
        cout << res << endl;
    }
    return 0;
}