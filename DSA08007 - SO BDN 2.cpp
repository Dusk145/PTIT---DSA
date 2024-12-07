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
        unsigned ll n;
        cin >> n;
        queue <unsigned ll> a;
        a.push(1);
        unsigned ll cnt = 0;
        while (!a.empty()){
            unsigned ll temp = a.front();
            a.pop();
            if (temp <= n){
                ++cnt;
                a.push(temp * 10);
                a.push(temp * 10 + 1);
            }
        }
        cout << cnt << endl;
    }
    return 0;
}