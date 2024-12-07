#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

string res(string a){
    stack <string> b;
    stack <char> op;
    for (int i = 0; i < a.length(); ++i){
        if (a[i] == ')'){
            string temp = "";
            if (!op.empty() && op.top() == '-'){
                while (!b.empty() && b.top() != "("){
                    if (b.top() == "-"){
                        b.top() = "+";
                    } else if (b.top() == "+"){
                        b.top() = "-";
                    }
                    temp = b.top() + temp;
                    b.pop();
                }
            } else {
                while (!b.empty() && b.top() != "("){
                    temp = b.top() + temp;
                    b.pop();
                }
            }
            b.pop(); 
            op.pop();
            for (int i = 0; i < temp.length(); ++i){
                b.push(string(1, temp[i]));
            }
        } else {
            if (i && a[i] == '('){
                op.push(a[i - 1]);
            }
            b.push(string(1, a[i]));
        }
    }
    string temp = "";
    while (!b.empty()){
        temp = b.top() + temp;
        b.pop();
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
        if (res(a) == res(b)){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}