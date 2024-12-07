#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

string res(string a){
    for (int i = a.length() - 1; i >= 0; --i){
        if (a[i] == '0'){
            ++a[i];
            return a;
        } else {
            a[i] = '0';
        }
    }
    return a;
}

bool check(string a){
    for (int i = 0; i < a.length() / 2; ++i){
        if (a[i] != a[a.length() - i - 1]){
            return false;
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    string a = "";
    for (int i = 0; i < n; ++i){
        a.push_back('0');
    }
    for (int i = 0; i < a.length(); ++i){
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 1; i < pow(2, n); ++i){
        a = res(a);
        if (check(a)){
            for (int i = 0; i < a.length(); ++i){
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}