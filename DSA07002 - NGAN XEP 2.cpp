#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    cin.ignore();
    stack <int> a;
    for (int i = 0; i < n; ++i){
        string temp;
        cin >> temp;
        if (temp == "PUSH"){
            int x;
            cin >> x;
            cin.ignore();
            a.push(x);
        } else if (temp == "POP"){
            if (!a.empty()){
                a.pop();
            }
        } else {
            if (a.size() == 0){
                cout << "NONE";
            } else {
                cout << a.top();
            }
            cout << endl;
        }
    }
    return 0;
}