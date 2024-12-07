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

bool check(tree &a){
    if (!a){
        return false;
    }
    if (!a->left && !a->right){
        return true;
    }
    return false;
}

void res(tree &a){
    queue <tree> b;
    b.push(a);
    set <int> c;
    while (!b.empty()){
        tree temp = b.front();
        b.pop();
        if (check(temp)){
            c.insert(temp->data);
        }
        if (temp->left){
            b.push(temp->left);
        }
        if (temp->right){
            b.push(temp->right);
        }
    }
    for (auto x : c){
        cout << x << " ";
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