#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

void change(vector <int> &a, int n){
    int temp = a.size();
    while (temp > 0 && a[temp - 1] == n - a.size() + temp){
        --temp;
    }
    if (temp != 0){
        ++a[temp - 1];
        for (int i = temp; i < a.size(); ++i){
            a[i] = a[i - 1] + 1;
        }
    }
}

int res(vector <int> &a, int n){
    int cnt = 0, temp = a.size();
    vector <int> b;
    for (int i = 0; i < temp; ++i){
        b.push_back(i + 1);
    }
    while (true){
        bool ok = true;
        for (int i = 0; i < temp; ++i){
            if (a[i] != b[i]){
                ++cnt;
                ok = false;
                break;
            }
        }
        if (ok){
            return cnt;
        } else {
            change(b, n);
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
        cout << res(a, n) + 1<< endl;
    }
    return 0;
}