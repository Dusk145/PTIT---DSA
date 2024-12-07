#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <int> a(100000), b(100000);
vector <string> c;
int cnt = 0;

void res(int i, int k, int begin, int end){
    for (int j = begin; j < end; ++j){
        b[i] = a[j];
        if (b[i] == k){
            string temp = "";
            for (int l = 0; l <= i; ++l){
                temp = temp + to_string(b[l]) + " ";
            }
            c.push_back(temp);
            ++cnt;
        } else {
            res(i + 1, k - b[i], j + 1, end);
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
        cin >> a[i];
    }
    res(0, k, 0, n);
    for (int i = cnt - 1; i >= 0; --i){
        cout << c[i] << endl;
    }
    cout << cnt << endl;
    return 0;
}