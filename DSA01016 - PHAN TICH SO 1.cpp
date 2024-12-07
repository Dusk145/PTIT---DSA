#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <int> a;
vector <string> b;

void res(int n, int k){
    for (int i = n; i >= 1; --i){
        a.push_back(i);
        if (i == k){
            string temp = to_string(a[0]);
            for (int i = 1; i < a.size(); ++i){
                temp = temp + " " + to_string(a[i]);
            }
            b.push_back(temp);
        } else if (i < k){
            res(i, k - i);
        }
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
        res(n, n);
        for (int i = 0; i < b.size(); ++i){
            cout << "(" << b[i] << ") ";
        }
        cout << endl;
        a.clear();
        b.clear();
    }
    return 0;
}