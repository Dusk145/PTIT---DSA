#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <int> a;
ll cnt = 0;

void res(int begin, int n, int k, int s){
    for (int i = begin; i <= n ; ++i){
        a.push_back(i);
        if (a.size() == k && i == s){
            ++cnt;
        } else if (a.size() < k && i < s){
            res(i + 1, n, k, s - i);
        }
        a.pop_back();
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k, s;
    cin >> n >> k >> s;
    while (n && k && s){
        if (n >= k){
            res(1, n, k, s);
            cout << cnt << endl;
            a.clear();
            cnt = 0;
        } else {
            cout << "0\n";
        }
        cin >> n >> k >> s;
    }
    return 0;
}