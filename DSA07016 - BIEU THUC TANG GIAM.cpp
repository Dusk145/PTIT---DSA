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
        stack <int> b;
        string res = "";
        int cnt = 1;
        for (int i = 0; i < a.length(); ++i){
            b.push(cnt);
            ++cnt;
            if (a[i] == 'I'){
                while (b.size()){
                    res += to_string(b.top());
                    b.pop();
                }
            }
        }
        b.push(cnt);
        while (b.size()){
            res += to_string(b.top());
            b.pop();
        }
        cout << res << endl;
    }
    return 0;
}