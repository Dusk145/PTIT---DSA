#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

struct cnt{
    int x, y, z;
};

bool cmp(cnt &a, cnt &b){
    if (a.z < b.z){
        return true;
    }
    if (a.z == b.z && a.y < b.y){
        return true;
    }
    return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        vector <cnt> a(n);
        for (int i = 0; i < n; ++i){
            cin >> a[i].x;
            a[i].y = i;
            a[i].z = abs(k - a[i].x);
        }
        sort(a.begin(), a.end(), cmp);
        for (int i = 0; i < n; ++i){
            cout << a[i].x << " ";
        }
        cout << endl;
    }
    return 0;
}