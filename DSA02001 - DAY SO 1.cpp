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
        int temp = n;
        while (temp){
            cout << "[";
            for (int i = 0; i < temp; ++i){
                cout << a[i];
                if (i < temp - 1){
                    cout << " ";
                }
                if (i + 1 < n){
                    a[i] += a[i + 1];
                }
            }
            cout << "]\n";
            --temp;
        }
    }
    return 0;
}