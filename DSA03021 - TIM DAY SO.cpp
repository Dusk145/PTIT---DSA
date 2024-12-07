#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

bool check(int x, vector <int> &a){
    for (int i = 0; i < a.size(); ++i){
        if (a[i] / x == a[i] / (x + 1)){
            return 0;
        }
    }
    return 1;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    auto it = min_element(a.begin(), a.end());
    vector <int> b(n);
    int res = 0;
    for (int i = *it; i > 0; --i){
        if (check(i, a)){
            for (int j = 0; j < n; ++j){
                b[j] = a[j] / (i + 1) + 1;
                res += b[j];
            }
            break;
        }
    }
    cout << res << endl;
    return 0;
}