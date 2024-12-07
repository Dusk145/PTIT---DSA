#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <bool> ok(10000, true);

void nt(){
    ok[0] = ok[1] = false;
    for (int i = 2; i < sqrt(10000); ++i){
        if (ok[i]){
            for (int j = i * i; j < 10000; j += i){
                ok[j] = false;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    nt();
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        queue <pair <int, int>> a;
        a.push({n, 0});
        vector <bool> check(10000, true);
        check[n] = false;
        while (!a.empty()){
            bool flag = true;
            int temp = a.front().first;
            int cnt = a.front().second;
            a.pop();
            string s = to_string(temp);
            for (int i = 0; i < s.length(); ++i){
                for (int j = 0; j <= 9; ++j){
                    if (i == 0 && j == 0){
                        continue;
                    }
                    s[i] = j + '0';
                    int num = stoi(s);
                    if (num == m){
                        if (temp == num){
                            cout << cnt << endl;
                        } else {
                            cout << cnt + 1 << endl;
                        }
                        flag = false;
                        break;
                    }
                    if (ok[num] && check[num]){
                        a.push({num, cnt + 1});
                        check[num] = false;
                    }
                }
                if (!flag){
                    break;
                }
                s = to_string(temp);
            }
            if (!flag){
                break;
            }
        }
    }
    return 0;
}