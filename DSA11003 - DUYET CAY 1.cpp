#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <int> in, pre;
unordered_map <int, int> a;

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

tree build(int left, int right, int &idx){
    if (left > right){
        return NULL;
    }
    tree x = new node(pre[idx]);
    int temp = a[pre[idx]];
    ++idx;
    x->left = build(left, temp - 1, idx);
    x->right = build(temp + 1, right, idx);
    return x;
}

void res(tree &x){
    if (!x){
        return;
    }
    res(x->left);
    res(x->right);
    cout << x->data << " ";
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
            in.push_back(x);
            a[x] = i;
        }
        for (int i = 0; i < n; ++i){
            int x;
            cin >> x;
            pre.push_back(x);
        }
        int idx = 0;
        tree b = build(0, n - 1, idx);
        res(b);
        cout << endl;
        in.clear();
        pre.clear();
        a.clear();
    }
    return 0;
}