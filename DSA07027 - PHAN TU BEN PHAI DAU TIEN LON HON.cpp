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
        stack <int> b;
        b.push(a[n - 1]);
        vector <int> c(n);
        c[n - 1] = - 1;
        for (int i = n - 2; i >= 0; --i){
            while (b.size()){
                if (b.top() > a[i]){
                    c[i] = b.top();
                    b.push(a[i]);
                    break;
                } else {
                    b.pop();
                }
            }
            if (b.empty()){
                c[i] = - 1;
                b.push(a[i]);
            }
        }
        for (int i = 0; i < n; ++i){
            cout << c[i] << " ";
        }
        cout << endl;
    }
    return 0;
}