#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

string temp;

void res(string &a, int k){
    if (k == 0){
        return;
    }
    for (int i = 0; i < a.length() - 1; ++i){
        for (int j = i + 1; j < a.length(); ++j){
            if (a[i] < a[j]){
                swap(a[i], a[j]);
                temp = max(temp, a);
                res(a, k - 1);
                swap(a[i], a[j]);
            }
        }
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
        string a;
        getline(cin, a);
        temp = a;
        res(a, n);
        cout << temp << endl;
    }
    return 0;
}