#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

map <int, int> cnt;

void res(string a){
    stringstream aa(a);
    string temp;
    while (aa >> temp){
        if (temp == "+"){
            continue;
        }
        size_t mid = temp.find("*x^");
        int x = stoi(temp.substr(0, mid));
        int y = stoi(temp.substr(mid + 3));
        cnt[y] += x;
    }
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
        res(a);
        res(b);
        string temp = "";
        for (auto x : cnt){
            temp = to_string(x.second) + "*x^" + to_string(x.first) + " + " + temp;
        }
        temp.pop_back();
        temp.pop_back();
        cout << temp << endl;
        cnt.clear();
    }
    return 0;
}