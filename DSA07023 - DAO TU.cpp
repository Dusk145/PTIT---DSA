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
        stringstream aa(a);
        string temp;
        stack <string> b;
        while (aa >> temp){
            b.push(temp);
        }
        while (b.size()){
            cout << b.top() << " ";
            b.pop();
        }
        cout << endl;
    }
    return 0;
}