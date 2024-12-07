#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <int> a(30), b(30);
vector <string> c;

void res(int idx, int begin, int end){
    for (int i = begin; i < end; ++i){
        if (idx == 0){
            b[idx] = a[i];
        } else {
            if (a[i] > b[idx - 1]){
                b[idx] = a[i];
            } else {
                continue;
            }
        }
        if (idx >= 1){
            string temp = "";
            for (int j = 0; j <= idx; ++j){
                temp = temp + to_string(b[j]) + " ";
            }
            c.push_back(temp);
        } 
        res(idx + 1, i + 1, end);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    res(0, 0, n);
    sort(c.begin(), c.end());
    for (int i = 0; i < c.size(); ++i){
        cout << c[i] << endl;
    }
    return 0;
}