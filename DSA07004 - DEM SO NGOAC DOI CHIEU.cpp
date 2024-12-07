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
        int cnt = 0, res = 0;
        for (int i = 0; i < a.length(); ++i){
            if (a[i] == '('){
                ++res;
            } else {
                --res;
            }
            if (res < 0){
                ++cnt;
                res += 2;
            }
        }
        if (res){
            cnt += res / 2;
        }
        cout << cnt << endl;
    }
    return 0;
}