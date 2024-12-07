#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

bool cmp(pair <int, int> &a, pair <int, int> &b){
    return a.second < b.second;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector <int> a(n), b(n);
        for (int i = 0; i < n; ++i){
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i){
            cin >> b[i];
        }
        vector <pair <int, int>> c;
        for (int i = 0; i < n; ++i){
            pair <int, int> temp;
            temp = make_pair(a[i], b[i]);
            c.push_back(temp);
        }
        sort(c.begin(), c.end(), cmp);
        int temp = 0, cnt = 0;
        for (int i = 0; i < n; ++i){
            if (c[i].first >= temp){
                ++cnt;
                temp = c[i].second;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}