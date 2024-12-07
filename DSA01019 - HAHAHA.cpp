#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

string res(string a){
    for (int i = a.length() - 2; i > 1; --i){
        if (a[i] == 'A'){
            if (a[i - 1] != 'H'){
                a[i] = 'H';
                return a;
            }
        } else {
            a[i] = 'A';
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
        int n;
        cin >> n;
        string a = "H";
        for (int i = 0; i < n - 1; ++i){
            a.push_back('A');
        }
        string temp = "";
        for (int i = 0; i < n - 1; ++i){
            if (i % 2 == 0){
                temp.push_back('H');
            } else {
                temp.push_back('A');
            }
        }
        temp.push_back('A');
        cout << a << endl;
        while (a != temp){
            a = res(a);
            cout << a << endl;
        }
    }
    return 0;
}