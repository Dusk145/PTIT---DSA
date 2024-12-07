#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n, s, m;
        cin >> n >> s >> m;
        int temp = 0;
        if ((s * m) % n != 0){
            temp = 1;
        }
        if ((m * s) / n + temp <= s - s / 7){
            cout << (m * s) / n + temp << endl;
        } else {
            cout << "-1\n";
        }
    }
    return 0;
}