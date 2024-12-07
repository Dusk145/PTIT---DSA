#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

string swap_str1(string a){
    swap(a[0], a[2]);
    swap(a[0], a[8]);
    swap(a[0], a[6]);
    return a;
}

string swap_str2(string a){
    swap(a[2], a[4]);
    swap(a[2], a[10]);
    swap(a[2], a[8]);
    return a;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string a, b;
        getline(cin, a);
        getline(cin, b);
        set <string> ok;
        ok.insert(a);
        queue <pair <string, int>> c;
        c.push({a, 0});
        while (!c.empty() && c.front().first != b){
            string temp = c.front().first;
            int cnt = c.front().second;
            c.pop();
            if (ok.find(swap_str1(temp)) == ok.end()){
                c.push({swap_str1(temp), cnt + 1});
            }
            if (ok.find(swap_str2(temp)) == ok.end()){
                c.push({swap_str2(temp), cnt + 1});
            }
        }
        cout << c.front().second << endl;
    }
    return 0;
}