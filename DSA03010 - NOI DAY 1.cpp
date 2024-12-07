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
        priority_queue <int, vector <int>, greater <int>> a;
        for (int i = 0; i < n; ++i){
            int x;
            cin >> x;
            a.push(x);
        }
        ll cnt = 0;
        while (a.size() > 1){
            ll temp = a.top();
            a.pop();
            temp += a.top();
            a.pop();
            cnt += temp;
            a.push(temp);
        }
        cout << cnt << endl;
    }
    return 0;
}