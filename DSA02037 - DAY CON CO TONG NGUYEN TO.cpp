#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <bool> ok(1500, true);

void prime(){
    ok[0] = ok[1] = false;
    for (int i = 2; i <= sqrt(1500); ++i){
        if (ok[i]){
            for (int j = i * i; j < 1500; j += i){
                ok[j] = false;
            }
        }
    }
}

vector <int> a, b;
set <vector <int>> c;

void res(int begin, int end, int S){
    for (int i = begin; i < end; ++i){
        b.push_back(a[i]);
        S += a[i];
        if (ok[S]){
            vector <int> temp;
            for (int j = b.size() - 1; j >= 0; --j){
                temp.push_back(b[j]);
            }
            c.insert(temp);
        }
        res(i + 1, end, S);
        S -= a[i];
        b.pop_back();
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
        for (int i = 0; i < n; ++i){
            int x;
            cin >> x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());
        res(0, n, 0);
        for (auto x : c){
            for (auto it : x){
                cout << it << " ";
            }
            cout << endl;
        }
        a.clear();
        b.clear();
        c.clear();
    }
    return 0;
}