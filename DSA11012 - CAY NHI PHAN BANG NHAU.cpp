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
        int n;
        cin >> n;
        cin.ignore();
        string a;
        getline(cin, a);
        int m;
        cin >> m;
        cin.ignore();
        string b;
        getline(cin, b);
        if (a == b){
            cout << "1\n";
        } else {
            cout << "0\n";
        }
    }
    return 0;
}