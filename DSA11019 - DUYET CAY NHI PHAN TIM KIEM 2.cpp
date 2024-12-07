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

void build(tree &a, int x){
    if (!a){
        a = new node(x);
    } else {
        if (a->data > x){
            build(a->left, x);
        } else {
            build(a->right, x);
        }
    }
}

void res(tree &a){
    if (!a){
        return;
    }
    res(a->left);
    res(a->right);
    cout << a->data << " ";
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
        for (int i = 0; i < n; ++i){
            int x;
            cin >> x;
            build(a, x);
        }
        res(a);
        cout << endl;
    }
    return 0;
}