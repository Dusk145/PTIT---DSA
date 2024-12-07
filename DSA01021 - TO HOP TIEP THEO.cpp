#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int res(vector <int> &a, int n){
    vector <int> b;
    for (int i = 0; i < a.size(); ++i){
        b.push_back(a[i]);
    }
    int cnt = 0, temp = a.size();
    while (temp > 0 && a[temp - 1] == n - a.size() + temp){
        --temp;
    }
    if (temp == 0){
        return a.size();
    } else {
        ++a[temp - 1];
        for (int i = temp; i < a.size(); ++i){
            a[i] = a[i - 1] + 1;
        }
    }
    for (int i = 0; i < b.size(); ++i){
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