#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <char> a(30);

void res(int i, int k, char begin, char end){
    for (char j = begin; j <= end; ++j){
        a[i] = j;
        if (i == k - 1){
            for (int l = 0; l < k; ++l){
                cout << a[l];
            }
            cout << endl;
        } else {
            res(i + 1, k, j, end);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    char c;
    int k;
    cin >> c >> k;
    res(0, k, 'A', c);
    return 0;
}