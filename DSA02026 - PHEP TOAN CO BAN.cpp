#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

string a;
vector <int> mark;
char dc[4] = {'+', '-', '*', '/'};
bool ok = true;

bool check(string x){
    int X = stoi(x);
    if (X >= 10 && X <= 99){
        return true;
    }
    return false;
}

bool count(){
    string x = string(1, a[0]) + string(1, a[1]);
    string y = string(1, a[5]) + string(1, a[6]);
    string z = string(1, a[10]) + string(1, a[11]);
    int X = stoi(x), Y = stoi(y), Z = stoi(z);
    if (!check(x) || !check(y) || !check(z)){
        return false;
    }
    if (a[3] == '+' && X + Y == Z){
        return true;
    } 
    if (a[3] == '-' && X - Y == Z){
        return true;
    }
    if (a[3] == '*' && X * Y == Z){
        return true;
    }
    if (a[3] == '/' && X % Y == 0 && X / Y == Z){
        return true;
    }
    return false;
}

void res(int idx){
    for (int i = 0; i <= 9; ++i){
        a[mark[idx]] = i + '0';
        if (idx == mark.size() - 1){
            if (count() && ok){
                cout << a << endl;
                ok = false;
                return;
            }
        } else {
            res(idx + 1);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        getline(cin, a);
        for (int i = 0; i < a.length(); ++i){
            if (a[i] == '?' && i != 3){
                mark.push_back(i);
            }
        }
        if (a[3] == '?'){
            for (int i = 0; i < 4; ++i){
                a[3] = dc[i];
                if (mark.empty() && count()){
                    cout << a << endl;
                    ok = false;
                } else if (!mark.empty()){
                    res(0);
                }
                if (!ok){
                    break;
                }
            }
        } else {
            if (mark.empty() && count()){
                cout << a << endl;
                ok = false;
            } else if (!mark.empty()){
                res(0);
            }
        }
        if (ok){
            cout << "WRONG PROBLEM!\n";
        }
        mark.clear();
        ok = true;
    }
    return 0;
}