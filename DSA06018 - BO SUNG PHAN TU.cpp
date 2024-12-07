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
        set <int> b;
        for (int i = 0; i < n; ++i){
            cin >> a[i];
            b.insert(a[i]);
        }
        auto it_max = max_element(a.begin(), a.end());
        auto it_min = min_element(a.begin(), a.end());
        cout << (ll)(*it_max - *it_min - b.size() + 1) << endl;
    }
    return 0;
}