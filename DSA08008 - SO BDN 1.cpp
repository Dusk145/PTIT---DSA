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
        int n;
        cin >> n;
        queue <ll> a;
        a.push(1);
        while (a.front() % n != 0){
            a.push(a.front() * 10);
            a.push(a.front() * 10 + 1);
            a.pop();
        }
        cout << a.front() << endl;
    }
    return 0;
}