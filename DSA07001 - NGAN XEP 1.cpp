#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a;
    vector <int> b;
    while (cin >> a){
        if (a.empty()){
            break;
        }
        if (a == "push"){
            int x;
            cin >> x;
            cin.ignore();
            b.push_back(x);
        } else if (a == "pop"){
            b.pop_back();
        } else {
            if (b.size() == 0){
                cout << "empty";
            } else {
                for (int i = 0; i < b.size(); ++i){
                    cout << b[i] << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}