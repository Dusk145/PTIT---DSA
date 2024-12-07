#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

struct node{
    int data;
    node* left;
    node* right;
    node(int x){
        this->data = x;
        left = right = NULL;
    }
};

typedef node* tree;

void add(tree &a, int n){
    map <int, tree> b;
    for (int i = 0; i < n; ++i){
        int x, y;
        char c;
        cin >> x >> y >> c;
        if (b.find(x) == b.end()){
            a = new node(x);
            if (c == 'L'){
                a->left = new node(y);
                b[y] = a->left;
            } else {
                a->right = new node(y);
                b[y] = a->right;
            }
            b[x] = a;
        } else {
            if (c == 'L'){
                b[x]->left = new node(y);
                b[y] = b[x]->left;
            } else {
                b[x]->right = new node(y);
                b[y] = b[x]->right;
            }
        }
    }
}

bool check(tree &a){
    if (!a){
        return false;
    }
    if (!a->left && !a->right){
        return true;
    }
    return false;
}

int res(tree &a){
    if (a == NULL){
        return 0;
    }
    int S = 0;
    if (check(a->right)){
        S = a->right->data;
    }
    if (a->right){
        S += res(a->right);
    }
    if (a->left && !check(a->left)){
        S += res(a->left);
    }
    return S;
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
        tree a = NULL;
        add(a, n);
        cout << res(a) << endl;
    }
    return 0;
}