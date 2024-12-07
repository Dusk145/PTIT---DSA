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
        vector <int> a(n);
        map <int, int> cnt;
        for (int i = 0; i < n; ++i){
            cin >> a[i];
            ++cnt[a[i]];
        }
        vector <pair <int, int>> b(n);
        for (int i = 0; i < n; ++i){
            b[i] = {a[i], cnt[a[i]]};
        }
        stack <pair <int, int>> c;
        vector <int> res(n, - 1);
        for (int i = n - 1; i >= 0; --i){
            while (c.size() && b[i].second >= c.top().second){
                c.pop();
            }
            if (c.size()){
                res[i] = c.top().first;
            }
            c.push({b[i].first, b[i].second});
        }
        for (int i = 0; i < n; ++i){
            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;
}