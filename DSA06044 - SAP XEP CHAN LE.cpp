#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

bool cmp(int a, int b){
    return a > b;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector <int> a, b;
    for (int i = 1; i <= n; ++i){
        int x;
        cin >> x;
        if (i % 2 == 0){
            a.push_back(x);
        } else {
            b.push_back(x);
        }
    }
    sort(a.begin(), a.end(), cmp);
    sort(b.begin(), b.end());
    int idx = 0;
    for (int i = 1; i <= n; ++i){
        if (i % 2 == 0){
            cout << a[idx] << " ";
            ++idx;
        } else {
            cout << b[idx] << " ";
        }
    }
    return 0;
}