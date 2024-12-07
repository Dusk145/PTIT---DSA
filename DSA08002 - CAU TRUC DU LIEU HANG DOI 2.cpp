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
    queue <int> a;
    for (int i = 0; i < n; ++i){
        string b;
        cin >> b;
        if (b == "PUSH"){
            int x;
            cin >> x;
            cin.ignore();
            a.push(x);
        } else if (b == "POP"){
            if (!a.empty()){
                a.pop();
            }
        } else {
            if (a.empty()){
                cout << "NONE\n";
            } else {
                cout << a.front() << endl;
            }
        }
    }
    return 0;
}