#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

string res(string a){
    for (int i = a.length() - 2; i > 1; --i){
        if (a[i] == '6'){
            if (a[i - 1] != '8'){
                a[i] = '8';
                return a;
            }
        } else {
            a[i] = '6';
        }
    }
    return a;
}

bool check(string a){
    for (int i = 0; i < a.length(); ++i){
        if (a[i] == '6' && a[i + 1] == '6' && a[i + 2] == '6' && a[i + 3] == '6'){
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
    string a = "8";
    int cnt = 0;
    for (int i = 1; i < n; ++i){
        if (cnt < 3){
            a.push_back('6');
            ++cnt;
        } else {
            a.push_back('8');
            cnt = 0;
        }
    }
    if (a[a.length() - 1] == '8'){
        swap(a[a.length() - 1], a[a.length() - 2]);
    }
    string temp = "";
    for (int i = 0; i < n - 1; ++i){
        if (i % 2 == 0){
            temp.push_back('8');
        } else {
            temp.push_back('6');
        }
    }
    temp.push_back('6');
    cout << a << endl;
    while (a != temp){
        a = res(a);
        if (check(a)){
            cout << a << endl;
        }
    }
    return 0;
}