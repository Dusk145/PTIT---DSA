#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

void res(vector <int> &a, int n){
    int temp = a.size();
    while (temp > 0 && a[temp - 1] == n - a.size() + temp){
        --temp;
    }
    if (temp == 0){
        for (int i = 0; i < a.size(); ++i){
            a[i] = i + 1;
        }
    } else {
        ++a[temp - 1];
        for (int i = temp; i < a.size(); ++i){
            a[i] = a[i - 1] + 1;
        }
    }
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
        vector <int> a(k);
        for (int i = 0; i < k; ++i){
            cin >> a[i];
        }
        res(a, n);
        for (int i = 0; i < k; ++i){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}