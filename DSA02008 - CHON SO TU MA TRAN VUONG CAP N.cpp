#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <vector <int>> a(20, vector <int> (20));
vector <bool> ok(20, true);
vector <int> b;
vector <string> c;
int cnt = 0;

void res(int i, int end, int S){
    for (int j = 0; j < end; ++j){
        if (ok[j]){
            b.push_back(j + 1);
            if (i == end - 1 && a[i][j] == S){
                ++cnt;
                string temp = "";
                for (int k = 0; k < b.size(); ++k){
                    temp += to_string(b[k]) + " ";
                }
                c.push_back(temp);
            } else if (a[i][j] < S){
                ok[j] = false;
                res(i + 1, end, S - a[i][j]);
                ok[j] = true;
            }
            b.pop_back();
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            cin >> a[i][j];
        }
    }
    res(0, n, k);
    cout << cnt << endl;
    for (int i = 0; i < cnt; ++i){
        cout << c[i] << endl;
    }
    return 0;
}