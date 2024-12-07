#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

bool cmp(pair <int, int> &a, pair <int, int> &b){
    if (a.first < b.first){
        return true;
    }
    if (a.first == b.first && a.second < b.second){
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
        int n, m;
        cin >> n >> m;
        vector <pair <int, int>> a(m);
        for (int i = 0; i < m; ++i){
            cin >> a[i].first >> a[i].second;
            if (a[i].first > a[i].second){
                swap(a[i].first, a[i].second);
            }
        }
        sort(a.begin(), a.end(), cmp);
        for (int i = 0; i < n; ++i){
            cout << i + 1 << ": ";
            for (int j = 0; j < m; ++j){
                if (i + 1 == a[j].first){
                    cout << a[j].second << " ";
                } else if (i + 1 == a[j].second){
                    cout << a[j].first << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}