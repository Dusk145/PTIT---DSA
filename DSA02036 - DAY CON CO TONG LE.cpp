#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <int> a(20), b(20);
set <vector <int>> c;

void res(int idx, int begin, int end, int S){
    for (int i = begin; i < end; ++i){
        b[idx] = a[i];
        S += a[i];
        if (S % 2 != 0){
            vector <int> temp;
            for (int j = idx; j >= 0; --j){
                temp.push_back(b[j]);
            }
            c.insert(temp);
        }
        res(idx + 1, i + 1, end, S);
        S -= a[i];
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i){
            cin >> a[i];
        }
        sort(a.begin(), a.begin() + n);
        res(0, 0, n, 0);
        for (auto x : c){
            for (auto it : x){
                cout << it << " ";
            }
            cout << endl;
        }
        c.clear();
    }
    return 0;
}