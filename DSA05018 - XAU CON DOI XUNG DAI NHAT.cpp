#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        string a;
        cin >> a;
        int res = INT_MIN;
        for (int i = 0; i < a.length(); ++i){
            int left = i, right = i;
            while (left >= 0 && right < a.length()){
                if (a[left] == a[right]){
                    res = max(res, right - left + 1);
                    --left;
                    ++right;
                } else {
                    break;
                }
            }
        }
        for (int i = 0; i < a.length() - 1; ++i){
            int left = i, right = i + 1;
            while (left >= 0 && right < a.length()){
                if (a[left] == a[right]){
                    res = max(res, right - left + 1);
                    --left;
                    ++right;
                } else {
                    break;
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}