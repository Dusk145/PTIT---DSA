#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <int> a, b;
int cnt = 0;

void res(int begin, int end, int k){
    for (int i = begin; i < end; ++i){
        if (b.empty() || a[i] > b[b.size() - 1]){
            b.push_back(a[i]);
            if (b.size() == k){
                ++cnt;
            } else {
                res(i + 1, end, k);
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
        int x;
        cin >> x;
        a.push_back(x);
    }
    res(0, n, k);
    cout << cnt << endl;
    return 0;
}