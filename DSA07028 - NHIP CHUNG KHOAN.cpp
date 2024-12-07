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
        stack <pair <int, int>> b;
        for (int i = 0; i < n; ++i){
            while (b.size() && a[i] > b.top().first){
                b.pop();
            }
            if (b.empty()){
                cout << i + 1 << " ";
            } else {
                cout << i - b.top().second + 1 << " ";
            }
            b.push({a[i], i + 1});
        }
        cout << endl;
    }
    return 0;
}