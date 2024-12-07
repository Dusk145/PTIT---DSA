#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <int> a;
vector <bool> ok;
bool check = true;

void res(int end, int S, int temp, int k){
    if (k == 0){
        check = false;
        return;
    }
    if (!check){
        return;
    }
    for (int i = 0; i < end; ++i){
        if (ok[i]){
            ok[i] = false;
            if (temp + a[i] == S){
                res(end, S, 0, k - 1);
                ok[i] = true;
                return;
            } else if (temp + a[i] < S){
                res(end, S, temp + a[i], k);
            } else {
                ok[i] = true;
                return;
            }
            ok[i] = true;
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
        int S = 0;
        for (int i = 0; i < n; ++i){
            int x;
            cin >> x;
            a.push_back(x);
            S += x;
            ok.push_back(true);
        }
        if (S % k == 0){
            res(n, S / k, 0, k);
            if (check){
                cout << "0\n";
            } else {
                cout << "1\n";
            }
        } else {
            cout << "0\n";
        }
        a.clear();
        ok.clear();
        check = true;
    }
    return 0;
}