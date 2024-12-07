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
        for (int i = a.length() - 1; i >= 0; --i){
            if (a[i] >= '0' && a[i] <= '9'){
                b.push(a[i] - '0');
            } else {
                int x = b.top();
                b.pop();
                int y = b.top();
                b.pop();
                if (a[i] == '+'){
                    b.push(x + y);
                } else if (a[i] == '-'){
                    b.push(x - y);
                } else if (a[i] == '*'){
                    b.push(x * y);
                } else {
                    b.push(x / y);
                }
            }
        }
        cout << b.top() << endl;
    }
    return 0;
}