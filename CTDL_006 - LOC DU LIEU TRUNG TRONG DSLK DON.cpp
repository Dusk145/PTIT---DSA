#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    map <int, int> a;
    for (int i = 0; i < n; ++i){
        int x;
        cin >> x;
        ++a[x];
        if (a[x] == 1){
            cout << x << " ";
        }
    }
    return 0;
}