#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a;
    getline(cin, a);
    stack <char> b, c;
    for (int i = 0; i < a.length(); ++i){
        if (a[i] == '<'){
            if (b.size()){
                c.push(b.top());
                b.pop();
            } 
        } else if (a[i] == '>'){
            if (c.size()){
                b.push(c.top());
                c.pop();
            }
        } else if (a[i] == '-'){
            if (b.size()){
                b.pop();
            }
        } else {
            b.push(a[i]);
        }
    }
    string res = "";
    while (c.size()){
        res += string(1, c.top());
        c.pop();
    }
    reverse(res.begin(), res.end());
    while (b.size()){
        res += string(1, b.top());
        b.pop();
    }
    for (int i = res.length() - 1; i >= 0; --i){
        cout << res[i];
    }
    return 0;
}