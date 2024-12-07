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
        string res = "";
        for (int i = 0; i < a.length(); ++i){
            if (a[i] == '+' || a[i] == '-' || a[i] == '*' || a[i] == '/'){
                string x = b.top();
                b.pop();
                string y = b.top();
                b.pop();
                b.push(y + a[i] + x);
            } else {
                b.push(string(1, a[i]));
            }
        }
        cout << b.top() << endl;
    }
    return 0;
}