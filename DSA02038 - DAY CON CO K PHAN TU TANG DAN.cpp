#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <int> a, b;

void res(int begin, int end, int k){
    for (int i = begin; i < end; ++i){
        b.push_back(a[i]);
        if (b.size() == k){
            for (int i = 0; i < k; ++i){
                cout << b[i] << " ";
            }
            cout << endl;
        } else {
            res(i + 1, end, k);
        }
        b.pop_back();
    }
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
        for (int i = 0; i < n; ++i){
            int x;
            cin >> x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());
        res(0, n, k);
        a.clear();
        b.clear();
    }
    return 0;
}