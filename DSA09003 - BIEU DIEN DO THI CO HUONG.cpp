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
        int v, e;
        cin >> v >> e;
        vector <pair <int, int>> a(e);
        for (int i = 0; i < e; ++i){
            cin >> a[i].first >> a[i].second;
        }
        sort(a.begin(), a.end());
        for (int i = 1; i <= v; ++i){
            cout << i << ": ";
            for (int j = 0; j < e; ++j){
                if (a[j].first == i){
                    cout << a[j].second << " ";
                } else if (a[j].first > i){
                    break;
                }
            }
            cout << endl;
        }
    }
    return 0;
}