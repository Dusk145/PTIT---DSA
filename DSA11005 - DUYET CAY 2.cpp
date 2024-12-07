#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

vector <int> in, lev;
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


tree build(int left, int right, int idx, int n){
    if (idx >= n || left > right){
        return NULL;
    }
    tree x = new node(lev[idx]);
    int temp = a[lev[idx]];
    x->left = build(left, temp - 1, 2 * idx + 1, n);
    x->right = build(temp + 1, right, 2 * idx + 2, n);
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
            lev.push_back(x);
        }
        int idx = 0;
        tree x = build(0, n - 1, idx, n);
        res(x);
        cout << endl;
        in.clear();
        lev.clear();
        a.clear();
    }
    return 0;
}