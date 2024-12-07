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
        map <int, int> b;
        for (int i = 0; i < a.length(); ++i){
            ++b[a[i]];
        }
        bool ok = true;
        for (auto x : b){
            if (x.second * 2 > a.length() + 1){
                cout << "-1";
                ok = false;
                break;
            }
        }
        if (ok){
            cout << "1";
        }
        cout << endl;
    }
    return 0;
}