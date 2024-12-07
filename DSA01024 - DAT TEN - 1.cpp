#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

void res(vector <string> &a, vector <string> &b, int k, bool &ok){
    int temp = a.size(), idx = b.size();
    while (idx > 0 && b[idx - 1] == a[temp - 1]){
        --idx;
        --temp;
    }
    if (idx == 0){
        ok = false;
    } else {
        auto it = upper_bound(a.begin(), a.end(), b[idx - 1]);
        b[idx - 1] = *it;
        for (int i = idx; i < b.size(); ++i){
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
    cin.ignore();
    set <string> a;
    for (int i = 0; i < n; ++i){
        string x;
        cin >> x;
        a.insert(x);
    }
    vector <string> b, c(k);
    for (auto x : a){
        b.push_back(x);
    }
    for (int i = 0; i < k; ++i){
        c[i] = b[i];
    }
    bool ok = true;
    while (ok){
        for (int i = 0; i < k; ++i){
            cout << c[i] << " ";
        }
        cout << endl;
        res(b, c, k, ok);
    }
    return 0;
}