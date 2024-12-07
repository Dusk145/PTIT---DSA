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
        queue <int> a;
        for (int i = 0; i < n; ++i){
            int x;
            cin >> x;
            if (x == 1){
                cout << a.size() << endl;
            } else if (x == 2){
                if (!a.empty()){
                    cout << "NO\n";
                } else {
                    cout << "YES\n";
                }
            } else if (x == 3){
                int y;
                cin >> y;
                a.push(y);  
            } else if (x == 4){
                if (!a.empty()){
                    a.pop();
                }
            } else if (x == 5){
                if (!a.empty()){
                    cout << a.front() << endl;
                } else {
                    cout << "-1\n";
                }
            } else {
                if (!a.empty()){
                    cout << a.back() << endl;
                } else {
                    cout << "-1\n";
                }
            }
        }
    }
    return 0;
}