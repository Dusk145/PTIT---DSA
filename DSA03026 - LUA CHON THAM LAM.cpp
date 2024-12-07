#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

string mini(int n, int s){
    if (s == 0 && n > 1){
        return "-1";
    }
    if (s > n * 9){
        return "-1";
    }
    string res(n, '0');
    --s;
    for (int i = n - 1; i >= 0; --i){
        if (s > 0){
            res[i] = min(9, s) + '0';
            s -= (res[i] - '0');
        }
    }
    if (n > 1){
        ++res[0];
    }
    return res;
}

string maxi(int n, int s){
    if (s == 0 && n > 1){
        return "-1";
    }
    if (s > n * 9){
        return "-1";
    }
    string res(n, '0');
    for (int i = 0; i < n; ++i){
        if (s > 0){
            res[i] = min(9, s) + '0';
            s -= (res[i] - '0');
        }
    }
    return res;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, s;
    cin >> n >> s;
    cout << mini(n, s) << " " << maxi(n, s) << endl;
    return 0;
}