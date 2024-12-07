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
        sort(a.begin(), a.end());
        int left = 0, right = n - 1;
        while (left < right){
            cout << a[right] << " " << a[left] << " ";
            --right;
            ++left;
        }
        if (left == right){
            cout << a[left];
        }
        cout << endl;
    }
    return 0;
}