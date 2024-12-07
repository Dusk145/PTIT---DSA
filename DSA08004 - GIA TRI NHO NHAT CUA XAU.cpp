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
        cin.ignore();
        string a;
        getline(cin, a);
        map <char, int> b;
        for (int i = 0; i < a.length(); ++i){
            ++b[a[i]];
        }
        priority_queue <int> c;
        for (auto x : b){
            c.push(x.second);
        }
        while (n-- && c.size()){
            int temp = c.top();
            c.pop();
            c.push(temp - 1);
        }
        ll S = 0;
        while (c.size()){
            S += (c.top() * c.top());
            c.pop();
        }
        cout << S << endl;
    }
    return 0;
}