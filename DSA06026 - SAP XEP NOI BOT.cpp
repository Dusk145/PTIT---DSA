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
        bool ok = true;
        for (int j = 0; j < n - i - 1; ++j){
            if (a[j] > a[j + 1]){
                swap(a[j], a[j + 1]);
                ok = false;
            }
        }
        if (!ok){
            cout << "Buoc " << i + 1 << ": ";
            for (int j = 0; j < n; ++j){
                cout << a[j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}