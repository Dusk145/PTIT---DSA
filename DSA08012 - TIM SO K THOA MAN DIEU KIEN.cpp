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
        int x, y;
        cin >> x >> y;
        queue <int> a;
        for (int i = 1; i <= 5; ++i){
            a.push(i);
        }
        int cnt = 0;
        while (a.size()){
            if (a.front() >= x && a.front() <= y){
                ++cnt;
            }
            string temp = to_string(a.front());
            if (temp.size() < to_string(y).size()){
                vector <bool> ok(6, true);
                for (int i = 0; i < temp.size(); ++i){
                    ok[temp[i] - '0'] = false;
                }
                for (int i = 0; i <= 5; ++i){
                    if (ok[i]){
                        a.push(a.front() * 10 + i);
                    }
                }
            }
            a.pop();
        }
        if (x == 0){
            ++cnt;
        }
        cout << cnt << endl;
    }
    return 0;
}