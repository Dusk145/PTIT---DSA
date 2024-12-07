#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

string res(string a){
    for (int i = a.length() - 1; i >= 0; --i){
        if (a[i] == '0'){
            ++a[i];
            return a;
        } else {
            a[i] = '0';
        }
    }
    return a;
}

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
        cout << res(a) << endl; 
    }
    return 0;
}