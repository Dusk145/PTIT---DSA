#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int res(vector <int> &a, int n){
    int cnt = 0, idx = a.size();
    vector <int> b;
    for (int i = 0; i < a.size(); ++i){
        b.push_back(a[i]);
    }
    while (idx > 0 && a[idx - 1] == n - a.size() + idx){
        --idx;
    }
    if (idx == 0){
        return a.size();
    } else {
        ++a[idx - 1];
        for (int i = idx; i < a.size(); ++i){
            a[i] = a[i - 1] + 1;
        }
    }
    for (int i = 0; i < a.size(); ++i){
        auto it = find(b.begin(), b.end(), a[i]);
        if (it == b.end()){
            ++cnt;
        }
    }
    return cnt;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        vector <int> a(k);
        for (int i = 0; i < k; ++i){
            cin >> a[i];
        }
        cout << res(a, n) << endl;
    }
    return 0;
}