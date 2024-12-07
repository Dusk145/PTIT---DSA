#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

struct cnt{
    int x, y;
};

bool cmp(cnt &a, cnt &b){
    return a.y > b.y;
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
        vector <cnt> a;
        for (int i = 0; i < n; ++i){
            int m;
            cin >> m;
            bool ok = true;
            for (int j = 0; j < a.size(); ++j){
                if (a[j].x == m){
                    ++a[j].y;
                    ok = false;
                    break;
                }
            }
            if (ok){
                a.push_back({m, 1});
            }
        }
        sort(a.begin(), a.end(), cmp);
        if (a[0].y > n / 2){
            cout << a[0].x << endl;
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}