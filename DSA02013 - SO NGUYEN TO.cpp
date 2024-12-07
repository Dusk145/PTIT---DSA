#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <int> a, b(100);
vector <string> c;
int cnt = 0;

void prime(int p, int s){
    vector <bool> temp(s + 1, true);
    temp[0] = temp[1] = false;
    for (int i = 2; i <= sqrt(s); ++i){
        if (temp[i]){
            for (int j = i * i; j <= s; j += i){
                temp[j] = false;
            }
        }
    }
    for (int i = p + 1; i <= s; ++i){
        if (temp[i]){
            a.push_back(i);
        }
    }
}

void res(int idx, int begin, int end, int n, int s){
    for (int i = begin; i < end; ++i){
        b[idx] = a[i];
        if (b[idx] == s && idx == n - 1){
            ++cnt;
            string temp = "";
            for (int j = 0; j < n; ++j){
                temp = temp + to_string(b[j]) + " ";
            }
            c.push_back(temp);
        } else if (b[idx] < s && idx != n - 1){
            res(idx + 1, i + 1, end, n, s - b[idx]);
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
        int n, p, s;
        cin >> n >> p >> s;
        prime(p, s);
        res(0, 0, a.size(), n, s);
        cout << cnt << endl;
        for (int i = 0; i < c.size(); ++i){
            cout << c[i] << endl;
        }
        a.clear();
        c.clear();
    }
    return 0;
}