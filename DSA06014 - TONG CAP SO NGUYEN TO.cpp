#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <bool> a(1000000, true);

void prime(){
    a[0] = a[1] = false;
    for (int i = 2; i <= 1000; ++i){
        if (a[i]){
            for (int j = i * i; j < 1000000; j += i){
                a[j] = false;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    prime();
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        bool ok = true;
        for (int i = 2; i <= n / 2; ++i){
            if (a[i] && a[n - i]){
                cout << i << " " << n - i << endl;
                ok = false;
                break;
            }
        }
        if (ok){
            cout << "-1\n";
        }
    }
    return 0;
}