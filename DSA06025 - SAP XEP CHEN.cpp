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
    vector <int> a(n);
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i){
        sort(a.begin(), a.begin() + i + 1);
        cout << "Buoc " << i << ": ";
        for (int j = 0; j <= i; ++j){
            cout << a[j] << " ";
        }
        cout << endl;
    }
    return 0;
}