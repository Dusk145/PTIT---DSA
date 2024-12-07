#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int res(vector <int> a, int k){
    int left = 0, right = a.size() - 1;
    while (left <= right){
        int mid = (left + right) / 2;
        if (a[mid] == k){
            return mid;
        } else if (a[mid] > k){
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return - 1 ;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        vector <int> a(n);
        for (int i = 0; i < n; ++i){
            cin >> a[i];
        }
        if (res(a, k) == - 1){
            cout << "NO\n";
        } else {
            cout << res(a, k) + 1 << endl;
        }
    }
    return 0;
}