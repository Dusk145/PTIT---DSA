#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <int> a;
int cnt = 0;

void res(int begin, int end, int S, int temp, int k){
    if (k == 0 && begin == end){
        ++cnt;
        return;
    }
    for (int i = begin; i < end; ++i){
        temp += a[i];
        if (temp == S){
            res(i + 1, end, S, 0, k - 1);    
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    int S = 0;
    for (int i = 0; i < n; ++i){
        int x;
        cin >> x;
        S += x;
        a.push_back(x);
    }
    if (S % k == 0){
        res(0, n, S / k, 0, k);
        cout << cnt << endl;
    } else {
        cout << "0\n";
    }
    return 0;
}