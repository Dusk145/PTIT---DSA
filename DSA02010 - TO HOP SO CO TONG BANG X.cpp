#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <int> a(30), b(30);
bool ok = true;

void res(int idx, int begin, int end, int k){
    for (int i = begin; i < end; ++i){
        b[idx] = a[i];
        if (b[idx] == k){
            cout << "[";
            for (int j = 0; j <= idx; ++j){
                cout << b[j];
                if (j != idx){
                    cout << " ";
                }
            }
            cout << "]";
            ok = false;
        } else if (b[idx] < k){
            res(idx + 1, i, end, k - b[idx]);
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
        ok = true;
        int n, k;
        cin >> n >> k;
        for (int i = 0; i < n; ++i){
            cin >> a[i];
        }
        res(0, 0, n, k);
        if (ok){
            cout << "-1";
        }
        cout << endl;
    }
    return 0;
}