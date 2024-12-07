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
            if (a[i] == '['){
                ++cnt;
            } else {
                --cnt;
            }
            if (cnt < 0){
                for (int j = i + 1; j < a.length(); ++j){
                    if (a[j] != a[i]){
                        res += (j - i);
                        swap(a[i], a[j]);
                        cnt += 2;
                        break;
                    }
                }
            }
        }   
        cout << res << endl;
    }
    return 0;
}