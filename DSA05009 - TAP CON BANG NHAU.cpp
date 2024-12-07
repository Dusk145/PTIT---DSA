#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <int> a(200);
bool ok = true;

void res(int begin, int end, int temp, int S){
    if (!ok){
        return;
    }
    for (int i = begin; i < end; ++i){
        if (temp + a[i] == S && ok){
            ok = false;
            cout << "YES\n";
            return;
        } else if (temp + a[i] < S){
            res(i, end, temp + a[i], S);
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
        int n;
        cin >> n;
        int S = 0;
        for (int i = 0; i < n; ++i){
            cin >> a[i];
            S += a[i];
        }
        if (S % 2 == 0){
            res(0, n, 0, S / 2);
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}