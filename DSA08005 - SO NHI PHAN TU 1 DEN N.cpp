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
        if (n >= 1){
            cout << "1 ";
        }
        queue <string> a;
        a.push("1");
        for (int i = 2; i <= n; ++i){
            if (i % 2 == 0){
                cout << a.front() + to_string(0) << " ";
                a.push(a.front() + to_string(0));
            } else {
                cout << a.front() + to_string(1) << " ";
                a.push(a.front() + to_string(1));
                a.pop();
            }

        }
        cout << endl;
    }
    return 0;
}