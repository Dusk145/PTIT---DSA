#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

string a, b = "";

void res(int begin, int end){
    for (int i = begin; i < end; ++i){
        b.push_back(a[i]);
        cout << b << " ";
        res(i + 1, end);
        b.pop_back();
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
        cin.ignore();
        getline(cin, a);
        res(0, n);
        cout << endl;
        b.clear();
    }
    return 0;
}