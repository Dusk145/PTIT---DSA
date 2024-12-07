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
        ll n, m;
        cin >> n >> m;
        int temp = __gcd(m, n);
        n /= temp;
        m /= temp;
        for (ll i = 2; i < 1000000000; ++i){
            if (n == 1){
                cout << n << "/" << m << endl;
                break;
            } else if (n * i - m > 0){
                cout << "1/" << i << " + ";
                n = n * i - m;
                m *= i;
                temp = __gcd(m, n);
                m /= temp;
                n /= temp;
            }
        }
    }
    return 0;
}