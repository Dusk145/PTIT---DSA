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
        b.push(-1);
        int maxi = 0;
        for (int i = 0; i < a.length(); ++i){
            if (a[i] == '('){
                b.push(i);
            } else {
                b.pop();
                if (!b.empty()){
                    maxi = max(maxi, i - b.top());
                } else {
                    b.push(i);
                }
            }
        }
        cout << maxi << endl;
    }
    return 0;
}