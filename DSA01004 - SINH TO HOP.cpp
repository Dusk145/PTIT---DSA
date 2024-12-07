#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

bool ok = true;

void res(vector <int> &a, int n, int k){
    while (k > 0 && a[k - 1] == n - a.size() + k){
        --k;
    }
    if (k == 0){
        ok = false;
    } else {
        ++a[k - 1];
        for (int i = k; i < a.size(); ++i){
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
            a[i] = i + 1;
        }
        ok = true;
        while (ok){
            for (int i = 0; i < a.size(); ++i){
                cout << a[i];
            }
            cout << " ";
            res(a, n, k);
        }
        cout << endl;
    }
    return 0;
}