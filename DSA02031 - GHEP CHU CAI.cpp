#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <char> a(30);
vector <bool> ok(30, true);

bool check(int k){
    for (int i = 0; i < k; ++i){
        if ((a[i] == 'A' || a[i] == 'E') && i != k - 1 && i != 0){
            if (a[i - 1] != 'A' && a[i - 1] != 'E' && a[i + 1] != 'A' && a[i + 1] != 'E'){
                return false;
            }
        }
    }
    return true;
}

void res(int i, int k, char end){
    for (char j = 'A'; j <= end; ++j){
        if (ok[j - 'A']){
            ok[j - 'A'] = false;
            a[i] = j;
            if (i == k - 1){
                if (check(k)){
                    for (int l = 0; l < k; ++l){
                        cout << a[l];
                    }
                    cout << endl;
                }
            } else {
                res(i + 1, k, end);
            }
            ok[j - 'A'] = true;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    char c;
    cin >> c;
    res(0, c - 'A' + 1, c);
    return 0;
}