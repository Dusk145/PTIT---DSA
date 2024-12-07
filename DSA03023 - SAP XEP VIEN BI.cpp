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
    string a;
    cin >> a;
    int cntX = count(a.begin(), a.end(), 'X');
    int cntT = count(a.begin(), a.end(), 'T');
    int cntD = n - cntX - cntT;
    int cnt = 0, temp1 = 0, temp2 = 0;
    for (int i = 0; i < cntX; ++i){
        if (a[i] != 'X'){
            ++cnt;
        }
        if (a[i] == 'D'){
            ++temp1;
        }
    }
    for (int i = n - 1; i >= n - cntD; --i){
        if (a[i] != 'D'){
            ++cnt;
        }
        if (a[i] == 'X'){
            ++temp2;
        }
    }
    cout << cnt - min(temp1, temp2) << endl;
    return 0;
}