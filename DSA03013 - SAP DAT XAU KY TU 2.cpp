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
        cin.ignore();
        string a;
        getline(cin, a);
        map <char, int> b;
        for (int i = 0; i < a.length(); ++i){
            ++b[a[i]];
        }
        int maxi = 0;
        for (auto x : b){
            maxi = max(maxi, x.second);
        }
        if (maxi - (a.length() - maxi) / (n - 1) <= 1){
            cout << "1\n";
        } else {
            cout << "-1\n";
        }
    }
    return 0;
}