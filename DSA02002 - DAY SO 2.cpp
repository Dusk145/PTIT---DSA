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
        vector <string> b;
        int temp = n;
        while (temp){
            string res = "";
            for (int i = 0; i < temp; ++i){
                res = res + to_string(a[i]) + " ";
                if (i + 1 < temp){
                    a[i] += a[i + 1];
                }
            }
            res.pop_back();
            b.push_back(res);
            --temp;
        }
        for (int i = b.size() - 1; i >= 0; --i){
            cout << "[" << b[i] << "] ";
        }
        cout << endl;
    }
    return 0;
}