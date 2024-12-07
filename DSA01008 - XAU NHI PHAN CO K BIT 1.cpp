#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

bool check(string a, int n){
    for (int i = 0; i < a.length(); ++i){
        if (a[i] == '1'){
            --n;
        }
    }
    if (n == 0){
        return true;
    }
    return false;
}

string res(string a){
    for (int i = a.length() - 1; i >= 0; --i){
        if (a[i] == '0'){
            ++a[i];
            return a;
        } else {
            --a[i];
        }
    }
    return a;
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
        for (int i = 0; i < n; ++i){
            a.push_back('0');
        }
        for (int i = 0; i < pow(2, n); ++i){
            a = res(a);
            if (check(a, k)){
                cout << a << endl;
            }
        }
    }
    return 0;
}