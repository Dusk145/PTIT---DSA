#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int dx[8] = {- 2, - 2, - 1, - 1, 1, 1, 2, 2};
int dy[8] = {- 1, 1, - 2, 2, - 2, 2, - 1, 1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string a;
        getline(cin, a);
        queue <pair <int, int>> b;
        if (a[0] == a[3] && a[1] == a[4]){
            cout << "0\n";
        } else {
            b.push(make_pair((int)(a[0] - 'a' + 1), a[1] - '0'));
            vector <vector <bool>> ok(10, vector <bool> (10, true));
            vector <vector <int>> cnt(10, vector <int> (10, 0));
            while (b.size()){
                bool check = true;
                int x = b.front().first;
                int y = b.front().second;
                for (int i = 0; i < 8; ++i){
                    int u = x + dx[i];
                    int v = y + dy[i];
                    if (u >= 1 && v >= 1 && u <= 8 && v <= 8 && ok[u][v]){
                        ok[u][v] = false;
                        cnt[u][v] = cnt[x][y] + 1;
                        if (u == (int)(a[3] - 'a' + 1) && v == a[4] - '0'){
                            cout << cnt[u][v] << endl;
                            check = false;
                            break;
                        }
                        b.push(make_pair(u, v));
                    }
                }
                if (!check){
                    break;
                }
                b.pop();
            }
        }
    }
    return 0;
}