#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int change(int n, string a){
    int temp = 0, cnt = 1;
    for (int i = a.length() - 1; i >= 0; --i){
        temp += (a[i] - '0') * cnt;
        cnt *= n; 
    }
    return temp;
}

string res(int n, int a){
    string temp = "";
    while (a){
        temp = to_string(a % n) + temp;
        a /= n;
    }
    return temp;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n;
        string a, b;
        cin >> n >> a >> b;
        int x = change(n, a);
        int y = change(n, b);
        int temp = x + y;
        cout << res(n, temp) << endl;
    }
    return 0;
}