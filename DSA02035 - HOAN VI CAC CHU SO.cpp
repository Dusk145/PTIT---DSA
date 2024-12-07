#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    cin.ignore();
    vector <string> a(n);
    vector <int> b(k);
    for (int i = 0; i < n; ++i){
        getline(cin, a[i]);
    }
    for (int i = 0; i < k; ++i){
        b[i] = i;
    }
    ll res = LONG_LONG_MAX;
    while (true){
        ll mini = LONG_LONG_MAX, maxi = LONG_LONG_MIN;
        for (int i = 0; i < n; ++i){
            string temp = "";
            for (int j = 0; j < k; ++j){
                temp += a[i][b[j]];
            }
            mini = min(mini, stoll(temp));
            maxi = max(maxi, stoll(temp));
        }
        res = min(res, maxi - mini);
        if (!next_permutation(b.begin(), b.end())){
            break;
        }
    }
    cout << res << endl;
    return 0;
}