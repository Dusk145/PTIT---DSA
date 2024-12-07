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
        ll res = 0;
        for (int i = 0; i < a.length(); ++i){
            string temp = "";
            for (int j = i; j < a.length(); ++j){
                temp += string(1, a[j]);
                res += stoll(temp);
            }
        }
        cout << res << endl;
    }
    return 0;
}