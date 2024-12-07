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
        vector <int> b(n, - 1);
        stack <int> mini;
        mini.push(n - 1);
        for (int i = n - 2; i >= 0; --i){
            while (mini.size() && a[i] >= a[mini.top()]){
                mini.pop();
            }
            if (mini.size()){
                b[i] = mini.top();
            } else {
                b[i] =  - 1;
            }
            mini.push(i);
        }
        for (int i = n - 2; i >= 0; --i){
            if (b[i] != - 1){
                bool ok = true;
                for (int j = b[i] + 1; j < n; ++i){
                    if (a[b[i]] > a[j]){
                        b[i] = a[j];
                        ok = false;
                        break;
                    }
                }
                if (ok){
                    b[i] = - 1;
                }
            }
        }
        for (int i = 0; i < n; ++i){
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}