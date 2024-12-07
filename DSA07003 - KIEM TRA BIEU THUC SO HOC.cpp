#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

bool res(string a){
    stack <char> b;
    for (int i = 0; i < a.length(); ++i){
        b.push(a[i]);
        if (a[i] == ')'){
            char temp = b.top();
            bool ok = true;
            while (temp != '('){
                if (temp == '+' || temp == '-' || temp == '*' || temp == '/'){
                    ok = false;
                }
                b.pop();
                temp = b.top();
            }
            b.pop();
            if (ok){
                return false;
            }
        }
    }
    return true;
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
        if (res(a)){
            cout << "No\n";
        } else {
            cout << "Yes\n";
        }
    }
    return 0;
}