#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int incr(string a){
    int res = 0;
    for (int i = 0; i < a.length(); ++i){
        if (a[i] == '5'){
            ++a[i];
        }
        res = res * 10 + (a[i] - '0');
    }
    return res;
}

int decr(string a){
    int res = 0;
    for (int i = 0; i < a.length(); ++i){
        if (a[i] == '6'){
            --a[i];
        }
        res = res * 10 + (a[i] - '0');
    }
    return res;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a, b;
    cin >> a >> b;
    cout << decr(a) + decr(b) << " " << incr(a) + incr(b) << endl;
    return 0;
}