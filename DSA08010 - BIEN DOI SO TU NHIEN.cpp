#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        queue <pair <int, int>> a;
        a.push({n, 0});
        set <int> b;
        while (a.size()){
            int temp = a.front().first;
            int cnt = a.front().second;
            if (temp == 1){
                cout << cnt << endl;
                break;
            } else {
                if (b.find(temp - 1) == b.end()){
                    a.push({temp - 1, cnt + 1});
                    b.insert(temp - 1);
                }
                for (int i = 2; i * i <= temp; ++i){
                    if (temp % i == 0 && b.find(temp / i) == b.end()){
                        a.push({temp / i, cnt + 1});
                        b.insert(temp / i);
                    }
                }
            }
            a.pop();
        }
    }
    return 0;
}