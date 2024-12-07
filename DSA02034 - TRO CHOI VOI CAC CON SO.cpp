#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <int> a(20);
vector <bool> ok(20, true);

void res(int idx, int begin, int end){
    for (int i = begin; i < end; ++i){
        if (ok[i + 1] && (idx == 0 || abs(i + 1 - a[idx - 1]) != 1)){
            a[idx] = i + 1;
            ok[i + 1] = false;
            if (idx == end - 1){
                for (int j = 0; j < end; ++j){
                    cout << a[j];
                }
                cout << endl;
            } else {
                res(idx + 1, begin, end);
            }
            ok[i + 1] = true;
        }
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
        res(0, 0, n);
    }
    return 0;
}