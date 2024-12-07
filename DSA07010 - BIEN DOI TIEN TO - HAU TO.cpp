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
        stack <string> b;
        for (int i = a.length() - 1; i >= 0; --i){
            if (a[i] == '+' || a[i] == '-' || a[i] == '*' || a[i] == '/'){
                string temp = b.top();
                b.pop();
                temp = temp + b.top() + string(1, a[i]);
                b.pop();
                b.push(temp);
            } else {
                b.push(string(1, a[i]));
            }
        }
        cout << b.top() << endl;
    }
    return 0;
}