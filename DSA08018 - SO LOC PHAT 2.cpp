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
        int n;
        cin >> n;
        queue <ll> a;
        a.push(6);
        a.push(8);
        vector <ll> b;
        while (a.size()){
            string temp = to_string(a.front());
            if (temp.size() != n){
                a.push(a.front() * 10 + 6);
                a.push(a.front() * 10 + 8);
            }
            b.push_back(a.front());
            a.pop();
        }
        cout << b.size() << endl;
        for (int i = 0; i < b.size(); ++i){
            cout << b[i] << " ";
        }

        cout << endl;
    }
    return 0;
}