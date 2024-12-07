#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

string gen(string a){
    for (int i = a.length() - 1; i >= 0; --i){
        if (a[i] == '0'){
            a[i] = '1';
            return a;
        } else {
            a[i] = '0';
        }
    }
    return a;
}

string res(string a, string b){
    for (int i = 1; i < a.length(); ++i){
        if (a[i] == a[i - 1]){
            b += '0';
        } else {
            b += '1';
        }
    }
    return b;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        string a = string(n, '0');
        for (int i = 0; i < pow(2, n); ++i){
            string temp = string(1, a[0]);
            temp = res(a, temp);
            cout << temp << " ";
            a = gen(a);
        }
        cout << endl;
    }
    return 0;
}