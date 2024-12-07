#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <int> a(100), b(100);
bool ok = true;

void res(int i, int k, int begin, int end){
    for (int j = begin; j < end; ++j){
        b[i] = a[j];
        if (b[i] == k){
            cout << "[";
            for (int l = 0; l <= i; ++l){
                cout << b[l];
                if (l != i){
                    cout << " ";
                }
            }
            cout << "] ";
            ok = false;
        } else {
            res(i + 1, k - b[i], j + 1, end);
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
        for (int i = 0; i < n; ++i){
            cin >> a[i];
        }
        sort(a.begin(), a.begin() + n);
        ok = true;
        res(0, k, 0, n);
        if (ok){
            cout << "-1";
        }
        cout << endl;
    }
    return 0;
}