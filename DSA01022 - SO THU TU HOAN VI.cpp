#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

void res(vector <int> &a, bool &ok){
    int temp = a.size() - 1;
    while (temp > 0 && a[temp - 1] < a[temp]){
        --temp;
    }
    if (temp == 0){
        ok = false;
    } else {
        int idx = a.size() - 1;
        while (a[temp - 1] < a[idx]){
            --idx;
        }
        swap(a[temp - 1], a[idx]);
        reverse(a.begin() + temp, a.end());
    }
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
        vector <int> a(n);
        for (int i = 0; i < n; ++i){
            cin >> a[i];
        }
        bool ok = true;
        int cnt = 0;
        while (ok){
            ++cnt;
            res(a, ok);
        }
        cout << cnt << endl;
    }
    return 0;
}