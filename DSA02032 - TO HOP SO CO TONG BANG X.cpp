#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <int> a(30), b(30);
vector <string> c;
int cnt = 0;

void res(int idx, int begin, int end, int k){
    for (int i = begin; i < end; ++i){
        b[idx] = a[i];
        if (b[idx] == k){
            ++cnt;
            string temp = "";
            for (int j = 0; j <= idx; ++j){
                temp = temp + to_string(b[j]) + " ";
            }
            temp.pop_back();
            c.push_back(temp);
        } else if (b[idx] < k){
            res(idx + 1, i, end, k - b[idx]);
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
        cnt = 0;
        int n, k;
        cin >> n >> k;
        for (int i = 0; i < n; ++i){
            cin >> a[i];
        }
        res(0, 0, n, k);
        if (cnt == 0){
            cout << "-1\n";
        } else {
            cout << cnt << " ";
            for (int i = 0; i < c.size(); ++i){
                cout << "{" << c[i] << "} ";
            }
            cout << endl;
        }
        c.clear();
    }
    return 0;
}