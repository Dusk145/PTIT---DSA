#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

ll change(string a){
    ll temp = 0, cnt = 1;
    for (int i = a.length() - 1; i >= 0; --i){
        temp += ((a[i] - '0') * cnt);
        cnt *= 2;
    }
    return temp;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        string a, b;
        cin >> a >> b;
        cout << (ll)(change(a) * change(b)) << endl;
    }
    return 0;
}