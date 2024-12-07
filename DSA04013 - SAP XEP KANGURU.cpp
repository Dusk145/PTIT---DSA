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
        for (int i = 0; i < n; ++i){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int i = 0, j = n / 2;
        int cnt = 0;
        while (i < n / 2 && j < n){
            if (a[i] * 2 <= a[j]){
                ++cnt;
                ++i;
            }
            ++j;
        }
        cout << n - cnt << endl;
    }
    return 0;
}