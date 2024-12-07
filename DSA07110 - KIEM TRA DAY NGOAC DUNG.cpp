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
        stack <char> b;
        bool ok = true;
        for (int i = 0; i < a.length(); ++i){
            if (a[i] == '(' || a[i] == '[' || a[i] == '{'){
                b.push(a[i]);
            } else {
                if (!b.empty()){
                    if (a[i] == ')' && b.top() != '('){
                        ok = false;
                    } else if (a[i] == ']' && b.top() != '['){
                        ok = false;
                    } else if (a[i] == '}' && b.top() != '{'){
                        ok = false;
                    }
                    if (!ok){
                        break;
                    }
                    b.pop();
                } else {
                    ok = false;
                    break;
                }
            }
        }
        if (ok){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}