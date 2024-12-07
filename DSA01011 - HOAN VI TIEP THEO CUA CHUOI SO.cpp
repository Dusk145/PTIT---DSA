#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

string res(string &a){
    int temp = a.length() - 1;
    while (temp > 0 && a[temp - 1] >= a[temp]){
        --temp;
    }
    if (temp == 0){
        a = "BIGGEST";
    } else {
        int idx = a.length() - 1;
        while (a[temp - 1] >= a[idx]){
            --idx;
        }
        swap(a[temp - 1], a[idx]);
        reverse(a.begin() + temp, a.end());
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
        string a;
        cin >> a;
        cout << n << " " << res(a) << endl;
    }
    return 0;
}