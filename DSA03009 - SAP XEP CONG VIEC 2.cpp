#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

bool cmp(pair <int, int> &a, pair <int, int> &b){
    if (a.second > b.second){
        return true;
    }
    if (a.second == b.second && a.first > b.first){
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
        vector <pair <int, int>> a;
        int maxi = 0;
        for (int i = 0; i < n; ++i){
            int x, y, z;
            cin >> x >> y >> z;
            maxi = max(maxi, y);
            a.push_back({y, z});
        }
        sort(a.begin(), a.end(), cmp);
        vector <int> b(maxi + 1, 0);
        int cnt = 0, S = 0;
        for (int i = 0; i < n; ++i){
            for (int j = a[i].first; j >= 1; --j){
                if (b[j] == 0){
                    b[j] = a[i].second;
                    S += b[j];
                    ++cnt;
                    break;
                }
            }
        }
        cout << cnt << " " << S << endl;
    }
    return 0;
}