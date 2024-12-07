#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <int> a;

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

tree build(tree &x, int left, int right){
    if (left > right){
        return NULL;
    }
    int idx = left + (right - left) / 2;
    x = new node(a[idx]);
    x->left = build(x->left, left, idx - 1);
    x->right = build(x->right, idx + 1, right);
    return x;
}

void res(tree &a){
    if (!a){
        return;
    }
    cout << a->data << " ";
    res(a->left);
    res(a->right);
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
        for (int i = 0; i < n; ++i){
            int x;
            cin >> x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());
        tree b = build(b, 0, n - 1);
        res(b);
        cout << endl;
        a.clear();
    }
    return 0;
}