#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

void res(string &a, bool &ok){
    int temp = a.length() - 1;
    while (temp > 0 && a[temp - 1] > a[temp]){
        --temp;
    }
    if (temp == 0){
        ok = false;
    } else {
        int idx = a.length() - 1;
        while (a[temp - 1] > a[idx]){
            --idx;
        }
        swap(a[temp - 1], a[idx]);
        reverse(a.begin() + temp, a.end());
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string a;
        getline(cin, a);
        bool ok = true;
        while (ok){
            cout << a << " ";
            res(a, ok);
        }
        cout << endl;
    }
    return 0;
}