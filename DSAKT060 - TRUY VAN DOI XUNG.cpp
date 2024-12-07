#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a;
    cin >> a;
    int t;
    cin >> t;
    while (t--){
        char c;
        int x, y;
        cin >> c >> x >> y;
        if (c == 'c'){
            a[x - 1] = y + '0';
        } else {
            string temp = a;
            reverse(temp.begin() + x - 1, temp.begin() + y);
            if (a == temp){
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}