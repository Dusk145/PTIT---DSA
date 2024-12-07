#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

struct node{
    int data;
    node* left;
    node* right;
    node (int x){
        this->data = x;
        left = right = NULL;
    }
};

typedef node* tree;

void add(tree &a, int par, int x, char c){
    if (a == NULL){
        a = new node(par);
        if (c == 'L'){
            a->left = new node(x);
        } else if (c == 'R'){
            a->right = new node(x);
        }
    } else {
        if (a->data == par){
            if (c == 'L'){
                a->left = new node(x);
            } else if (c == 'R'){
                a->right = new node(x);
            }
        } else {
            if (a->left != NULL){
                add(a->left, par, x, c);
            }
            if (a->right != NULL){
                add(a->right, par, x, c);
            }
        }
    }
}

void res(tree &a){
    queue <tree> b;
    b.push(a);
    while (!b.empty()){
        tree temp = b.front();
        b.pop();
        cout << temp->data << " ";
        if (temp->left != NULL){
            b.push(temp->left);
        }
        if (temp->right != NULL){
            b.push(temp->right);
        }
    }
    cout << endl;
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
            int x, y;
            char c;
            cin >> x >> y >> c;
            add(a, x, y, c);
        }
        res(a);
    }
    return 0;
}