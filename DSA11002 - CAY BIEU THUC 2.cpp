#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

struct node{
    string data;
    node* left;
    node* right;
    node (string s){
        this->data = s;
        left = right = NULL;
    }
};

typedef node* tree;

void add(tree &a, vector <string> &b){
    queue <tree> c;
    int idx = 0;
    a = new node(b[idx]);
    ++idx;
    c.push(a);
    while (idx < b.size()){
        tree temp = c.front();
        c.pop();
        if (idx < b.size()){
            temp->left = new node(b[idx]);
            ++idx;
            c.push(temp->left);
        } 
        if (idx < b.size()){
            temp->right = new node(b[idx]);
            ++idx;
            c.push(temp->right);
        }
    }
}

ll cnt(tree &a){
    if (a->data != "+" && a->data != "-" && a->data != "*" && a->data != "/"){
        return stoll(a->data);
    }
    if (a->data == "+"){
        return (cnt(a->left) + cnt(a->right));
    } else if (a->data == "-"){
        return (cnt(a->left) - cnt(a->right));
    } else if (a->data == "*"){
        return (cnt(a->left) * cnt(a->right));
    } else {
        return (cnt(a->left) / cnt(a->right));
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
        vector <string> a(n);
        for (int i = 0; i < n; ++i){
            cin >> a[i];
        }
        tree res = NULL;
        add(res, a);
        cout << cnt(res) << endl;
    }
    return 0;
}