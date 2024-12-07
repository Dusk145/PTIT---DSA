#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

bool cmp(pair <int, int> &a, pair <int, int> &b){
    if (a.second < b.second){
        return true;
    }
    if (a.second == b.second && a.first < b.first){
        return true;
    }
    return false;
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
        vector <pair <int, int>> a;
        for (int i = 0; i < n; ++i){
            int x, y;
            cin >> x >> y;
            a.push_back(make_pair(x, y));
        }
        sort(a.begin(), a.end(), cmp);
        int cnt = 0, temp = 0;
        for (int i = 0; i < n; ++i){
            if (a[i].first >= temp){
                ++cnt;
                temp = a[i].second;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}