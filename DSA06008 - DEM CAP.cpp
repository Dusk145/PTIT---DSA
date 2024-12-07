#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int count_x(int x, vector <int> &a, vector <int> &cnt){
    if (x == 0){
        return 0;
    }
    if (x == 1){
        return cnt[0];
    }
    auto it = upper_bound(a.begin(), a.end(), x);
    int S = a.size() - (it - a.begin());
    if (x == 2){
        S -= (cnt[3] + cnt[4]);
    }
    if (x == 3){
        S += cnt[2];
    }
    S += (cnt[0] + cnt[1]);
    return S;
}

int res(vector <int> &a, vector <int> &b){
    vector <int> cnt(10000, 0);
    for (int i = 0; i < b.size(); ++i){
        ++cnt[b[i]];
    }
    int S = 0;
    for (int i = 0; i < a.size(); ++i){
        S += count_x(a[i], b, cnt);
    }
    return S;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        vector <int> a(n), b(m);
        for (int i = 0; i < n; ++i){
            cin >> a[i];
        }
        for (int i = 0; i < m; ++i){
            cin >> b[i];
        }
        sort(b.begin(), b.end());
        cout << res(a, b) << endl;
    }
    return 0;
}