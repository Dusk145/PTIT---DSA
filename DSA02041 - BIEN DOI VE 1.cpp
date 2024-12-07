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
        while (a.front().first != 1){
            int temp = a.front().first, cnt = a.front().second;
            if (temp % 2 == 0){
                a.push({temp / 2, cnt + 1});
            }
            if (temp % 3 == 0){
                a.push({temp / 3, cnt + 1});
            }
            a.push({temp - 1, cnt + 1});
            a.pop();
        }
        cout << a.front().second << endl;
    }
    return 0;
}