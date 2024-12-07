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
        priority_queue <int, vector <int>, greater <>> a, b, c;
        int S = 0;
        for (int i = 0; i < n; ++i){
            int x;
            cin >> x;
            S += x;
            if (x % 3 == 0){
                a.push(x);
            } else if (x % 3 == 1){
                b.push(x);
            } else {
                c.push(x);
            }
        }
        if (S % 3 == 1){
            if (b.empty()){
                if (c.size() >= 2){
                    c.pop();
                    c.pop();
                } else if (c.size() == 1){
                    c.pop();
                }
            } else {
                b.pop();
            }
        } else if (S % 3 == 2){
            if (c.empty()){
                if (b.size() >= 2){
                    b.pop();
                    b.pop();
                } else if (b.size() == 1){
                    b.pop();
                }
            } else {
                c.pop();
            }
        }
        if (a.empty() && b.empty() && c.empty()){
            cout << "-1\n";
        } else {
            vector <int> res;
            while (!a.empty()){
                res.push_back(a.top());
                a.pop();
            }
            while (!b.empty()){
                res.push_back(b.top());
                b.pop();
            }
            while (!c.empty()){
                res.push_back(c.top());
                c.pop();
            }
            sort(res.begin(), res.end());
            for (int i = res.size() - 1; i >= 0; --i){
                cout << res[i];
            }
            cout << endl;
        }
    }
    return 0;
}