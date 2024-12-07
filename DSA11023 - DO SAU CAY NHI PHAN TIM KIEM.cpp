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
    if (a){
        if (a->data > x){
            build(a->left, x);
        } else {
            build(a->right, x);
        }
    } else {
        a = new node(x);
    }
}

void res(tree &a){
    queue <pair <tree, int>> b;
    b.push({a, 0});
    set <int> c;
    while (!b.empty()){
        tree temp = b.front().first;
        int cnt = b.front().second;
        c.insert(cnt);
        b.pop();
        if (temp->left){
            b.push({temp->left, cnt + 1});
        }
        if (temp->right){
            b.push({temp->right, cnt + 1});
        }
    }
    cout << *c.rbegin() << endl;
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
    }
    return 0;
}