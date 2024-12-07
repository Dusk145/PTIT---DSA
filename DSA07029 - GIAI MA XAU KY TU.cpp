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
        stack <int> num;
        stack <string> b;
        for (int i = 0; i < a.length(); ++i){
            if (isdigit(a[i])){
                int temp = 0;
                while (i < a.length() && isdigit(a[i])){
                    temp = temp * 10 + (a[i] - '0');
                    ++i;
                }
                num.push(temp);
                --i;
            } else if (a[i] == '['){
                b.push(string(1, a[i]));
                if ((i > 0 && !isdigit(a[i - 1])) || i == 0){
                    num.push(1);
                }
            } else if (a[i] == ']'){
                string temp = "";
                while (!b.empty() && b.top() != "["){
                    temp = b.top() + temp;
                    b.pop();
                }
                b.pop();
                int cnt = num.top();
                num.pop();
                string s = "";
                for (int j = 0; j < cnt; ++j){
                    s += temp;
                }
                b.push(s);
            } else {
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