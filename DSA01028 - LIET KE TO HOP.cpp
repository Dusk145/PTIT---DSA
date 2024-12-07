#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

bool ok = true;

void res(vector <int> &a, vector <int> &b){
    int temp = b.size(), idx = a.size();
    while (temp > 0 && b[temp - 1] == a[idx - 1]){
        --temp;
        --idx;
    }
    if (temp == 0){
        ok = false;
    } else {
        auto it = upper_bound(a.begin(), a.end(), b[temp - 1]);
        b[temp - 1] = *it;
        for (int i = temp; i < b.size(); ++i){
            ++it;
            b[i] = *it;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    set <int> a;
    for (int i = 0; i < n; ++i){
        int x;
        cin >> x;
        a.insert(x);
    }
    vector <int> b, c(k);
    for (auto x : a){
        b.push_back(x);
    }
    for (int i = 0; i < k; ++i){
        c[i] = b[i];
    }
    ok = true;
    while (ok){
        for (int i = 0; i < k; ++i){
            cout << c[i] << " ";
        }
        cout << endl;
        res(b, c);
    }
    return 0;
}