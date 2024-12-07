#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

struct cnt{
    int x, y;
};

bool cmp(cnt &a, cnt &b){
    if (a.y > b.y){
        return true;
    }
    if (a.y == b.y && a.x < b.x){
        return true;
    }
    return false;
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
                if (m == a[j].x){
                    ok = false;
                    ++a[j].y;
                    break;
                }
            }
            if (ok){
                a.push_back({m, 1});
            }
        }
        sort(a.begin(), a.end(), cmp);
        for (int i = 0; i < a.size(); ++i){
            while (a[i].y){
                cout << a[i].x << " ";
                --a[i].y;
            }
        }
        cout << endl;
    }
    return 0;
}