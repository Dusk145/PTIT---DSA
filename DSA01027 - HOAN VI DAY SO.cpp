#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

void res(vector <int> &a, bool &ok){
    int temp = a.size() - 1;
    while (temp > 0 && a[temp - 1] > a[temp]){
        --temp;
    } 
    if (temp == 0){
        ok = false;
    } else {
        int idx = a.size() - 1;
        while (a[temp - 1] > a[idx]){
            --idx;
        }
        swap(a[temp - 1], a[idx]);
        reverse(a.begin() + temp, a.end());
    }
}

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
    sort(a.begin(), a.end());
    bool ok = true;
    while (ok){
        for (int i = 0 ; i < n; ++i){
            cout << a[i] << " ";
        }
        cout << endl;
        res(a, ok);
    }
    return 0;
}