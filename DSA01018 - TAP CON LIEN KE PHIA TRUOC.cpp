#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

void res(vector <int> &a, int n){
    int idx = a.size() - 1;
    while (idx >= 0 && a[idx] == a[idx - 1] + 1){
        --idx;
    }
    if (idx != - 1){
        --a[idx];
    }
    for (int i = idx + 1; i < a.size(); ++i){
        a[i] = n - a.size() + i + 1;
    }
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
        vector <int> a(k + 1, 0);
        for (int i = 1; i <= k; ++i){
            cin >> a[i];
        }
        res(a, n);
        for (int i = 1; i <= k; ++i){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}