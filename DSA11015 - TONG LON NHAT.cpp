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

void build(tree &a, int par, int x, char c){
    if (!a){
        a = new node(par);
        if (c == 'L'){
            a->left = new node(x);
        } else {
            a->right = new node(x);
        }
    } else {
        if (a->data == par){
            if (c == 'L'){
                a->left = new node(x);
            } else {
                a->right = new node(x);
            }
        } else {
            if (a->left){
                build(a->left, par, x, c);
            }
            if (a->right){
                build(a->right, par, x, c);
            }
        }
    }
}

int maxi = INT_MIN;

int res(tree &a){
    if (!a){
        return 0;
    }
    int Sl = res(a->left);
    int Sr = res(a->right);
    if (!a->left && !a->right){
        return a->data;
    }
    if (!a->left){
        return Sr + a->data; 
    }
    if (!a->right){
        return Sl + a->data;
    }
    if (a->right && a->left){
        maxi = max(maxi, Sr + Sl + a->data);
        return max(Sl, Sr) + a->data;
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
            int x, y;
            char c;
            cin >> x >> y >> c;
            build(a, x, y, c);
        }
        res(a);
        cout << maxi << endl;
        maxi = INT_MIN;
    }
    return 0;
}