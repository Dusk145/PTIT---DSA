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
    deque <int> a;
    for (int i = 0; i < n; ++i){
        string b;
        cin >> b;
        if (b == "PUSHBACK"){
            int x;
            cin >> x;
            cin.ignore();
            a.push_back(x);
        } else if (b == "PUSHFRONT"){
            int x;
            cin >> x;
            cin.ignore();
            a.push_front(x);
        } else if (b == "PRINTFRONT"){
            if (a.empty()){
                cout << "NONE\n";
            } else {
                cout << a.front() << endl;
            }
        } else if (b == "POPFRONT"){
            if (!a.empty()){
                a.pop_front();
            }
        } else if (b == "PRINTBACK"){
            if (a.empty()){
                cout << "NONE\n";
            } else {
                cout << a.back() << endl;
            }
        } else {
            if (a.empty()){
                a.pop_back();
            }
        }

    }
    return 0;
}