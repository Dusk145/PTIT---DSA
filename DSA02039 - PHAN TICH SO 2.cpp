#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <int> a;
vector <string> b;

void res(int begin, int n, int S){
    for (int i = begin; i >= 1; --i){
        a.push_back(i);
        S += i;
        if (S == n){
            string temp = "";
            for (int j = 0; j < a.size(); ++j){
                temp = temp + to_string(a[j]) + " ";
            }
            temp.pop_back();
            b.push_back(temp);
        } else if (S < n){
            res(i, n, S);
        }
        S -= i;
        a.pop_back();
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        res(n, n, 0);
        cout << b.size() << endl;
        for (int i = 0; i < b.size(); ++i){
            cout << "(" << b[i] << ") ";
        }
        cout << endl;
        a.clear();
        b.clear();
    }
    return 0;
}