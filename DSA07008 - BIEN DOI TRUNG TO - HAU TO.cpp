#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int check(char a){
    if (a == '+' || a == '-'){
        return 1;
    }
    if (a == '*' || a == '/'){
        return 2;
    }
    if (a == '^'){
        return 3;
    }
    return 0;
}

string res(string a){
    stack <char> b;
    string temp = "";
    for (int i = 0; i < a.length(); ++i){
        if (a[i] == '('){
            b.push(a[i]);
        } else if (a[i] == ')'){
            while (b.size() && b.top() != '('){
                temp += b.top();
                b.pop();
            }
            if (b.size()){
                b.pop();
            }
        } else if (isalnum(a[i])){
            temp += a[i];
        } else {
            while (b.size() && check(a[i]) <= check(b.top())){
                temp += b.top();
                b.pop();
            }
            b.push(a[i]);
        }
    }
    while (b.size()){
        temp += b.top();
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
    cin.ignore();
    while (t--){
        string a;
        getline(cin, a);
        cout << res(a) << endl;
    }
    return 0;
}