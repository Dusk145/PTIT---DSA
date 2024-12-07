#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    cin.ignore();
    vector <vector <bool>> a(n, vector <bool> (n, false));
    for (int i = 0; i < n; ++i){
        string b;
        getline(cin, b);
        stringstream bb(b);
        string temp;
        while (bb >> temp){
            int idx = stoi(temp);
            a[i][idx - 1] = a[idx - 1][i] = true;
        }
    }
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            if (a[i][j]){
                cout << i + 1 << " " << j + 1 << endl;
                a[j][i] = false;
            }
        }
    }
    return 0;
}