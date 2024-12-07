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
        string a;
        cin >> a;
        stack <char> b;
        int res = 0;
        for (int i = 0; i < a.length(); ++i){
            if (a[i] == '('){
                b.push(a[i]);
            } else {
                if (!b.empty() && b.top() == '('){
                    res += 2;
                    b.pop();
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}