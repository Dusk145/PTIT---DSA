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
        stack <string> b;
        stack <char> op;
        for (int i = 0; i < a.length(); ++i){
            if (a[i] == ')'){
                string temp = "";
                if (!op.empty() && op.top() == '-'){
                    while (!b.empty() && b.top() != "("){
                        string s = b.top();
                        if (s == "+"){
                            s = "-";
                        } else if (s == "-"){
                            s = "+";
                        }
                        temp = s + temp;
                        b.pop();
                    }
                } else {
                    while (!b.empty() && b.top() != "("){
                        temp = b.top() + temp;
                        b.pop();
                    }
                }
                op.pop();
                b.pop();
                for (int j = 0; j < temp.length(); ++j){
                    b.push(string(1, temp[j]));
                }
            } else {
                if (i && a[i] == '('){
                    op.push(a[i - 1]);
                }
                b.push(string(1, a[i]));
            }
        }
        string res = "";
        while (!b.empty()){
            res = b.top() + res;
            b.pop();
        }
        cout << res << endl;
    }
    return 0;
}