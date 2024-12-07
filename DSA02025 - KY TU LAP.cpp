#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <string> a;
vector <bool> ok;
int mini = 1e9;

int count(string a, string b){
    int cnt = 0;
    for (int i = 0; i < a.length(); ++i){
        for (int j = 0; j < b.length(); ++j){
            if (a[i] == b[j]){
                ++cnt;
                break;
            } else if (a[i] < b[j]){
                break;
            }
        }
    }
    return cnt;
}

void res(int end, int cnt, int idx, int S){
    for (int i = 0; i < end; ++i){
        if (ok[i]){
            ok[i] = false;
            if (cnt == end - 1){
                mini = min(mini, S + count(a[idx], a[i]));
            } else if (cnt < end - 1){
                int temp = 0;
                if (idx != - 1){
                    temp = count(a[idx], a[i]);
                }
                res(end, cnt + 1, i, S + temp);
            }
            ok[i] = true;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; ++i){
        string x;
        getline(cin, x);
        a.push_back(x);
        ok.push_back(true);
    }
    res(n, 0, - 1, 0);
    cout << mini << endl;
    return 0;
}