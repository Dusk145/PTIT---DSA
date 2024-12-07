#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

string res(string a){
    for (int i = a.length() - 1; i >= 0; --i){
        if (a[i] == 'A'){
            a[i] = 'B';
            return a;
        } else {
            a[i] = 'A';
        }
    }
    return a;
}

bool check(string a, int k){
    int cnt = 0, ok = 0;
    for (int i = 0; i < a.length(); ++i){
        if (a[i] == 'A'){
            ++cnt;
        } else {
            cnt = 0;
        }
        if (cnt == k && (a[i + 1] == 'B' || i == a.length() - 1)){
            ++ok;
        }
    }
    if (ok == 1){
        return true;
    }
    return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    string a = "";
    for (int i = 0; i < n; ++i){
        a.push_back('A');
    }
    vector <string> b;
    for (int i = 0; i < pow(2, n); ++i){
        if (check(a, k)){
            b.push_back(a);
        }
        a = res(a);
    }
    if (check(a, k)){
        b.push_back(a);
    }
    cout << b.size() << endl;
    for (int i = 0; i < b.size(); ++i){
        cout << b[i] << endl;
    }
    return 0;
}