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
        string word, res;
        cin >> n >> word >> res;
        set <string> a;
        for (int i = 0; i < n; ++i){
            string x;
            cin >> x;
            if (x != word){
                a.insert(x);
            }
        }
        queue <pair <string, int>> b;
        b.push({word, 1});
        while (!b.empty() && b.front().first != res){
            string temp = b.front().first;
            int cnt = b.front().second;
            for (int i = 0; i < temp.length(); ++i){
                char c = temp[i];
                for (char j = 'A'; j <= 'Z'; ++j){
                    temp[i] = j;
                    if (a.find(temp) != a.end()){
                        b.push({temp, cnt + 1});
                        a.erase(temp);
                    }
                }
                temp[i] = c;
            }
            b.pop();
        }
        cout << b.front().second << endl;
    }
    return 0;
}