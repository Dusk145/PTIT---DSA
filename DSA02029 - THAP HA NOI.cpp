#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

void res(int n, char a, char b, char c){
    if (n == 1){
        cout << a << " -> " << c << endl;
    } else {
        res(n - 1, a, c, b);
        cout << a << " -> " << c << endl;
        res(n - 1, b, a, c);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    res(n, 'A', 'B', 'C');
    return 0;
}