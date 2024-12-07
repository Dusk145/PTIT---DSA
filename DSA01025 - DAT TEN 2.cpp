#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

void res(string &a, int n, bool &ok){
    int idx = a.length(), cnt = 0;
    while (idx > 0 && a[idx - 1] == 'A' + n - cnt - 1){
        --idx;
        ++cnt;
    }
    if (idx == 0){
        ok = false;
    } else {
        ++a[idx - 1];
        for (int i = idx; i < a.length(); ++i){
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
        string a = "";
        char temp = 'A';
        for (int i = 0; i < k; ++i){
            a.push_back(temp);
            ++temp;
        }
        bool ok = true;
        while (ok){
            cout << a << endl;
            res(a, n, ok);
        }
    }
    return 0;
}