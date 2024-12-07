#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int n, k;
vector <string> a(30), b;

void res(int i, int temp){
    for (int j = temp; j < b.size(); ++j){
        a[i] = b[j];
        if (i == k - 1){
            for (int l = 0; l < k; ++l){
                cout << a[l] << " ";
            }
            cout << endl;
        } else {
            res(i + 1, j + 1);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    set <string> temp;
    for (int i = 0; i < n; ++i){
        string x;
        cin >> x;
        temp.insert(x);
    }
    for (auto x : temp){
        b.push_back(x);
    }
    res(0, 0);
    return 0;
}