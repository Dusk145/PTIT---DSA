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

void build(tree &x, int l, int r){
    if (l > r){
        return;
    }
    int idx = l + (r - l) / 2;
    x = new node(a[idx]);
    build(x->left, l, idx - 1);
    build(x->right, idx + 1, r);
}

void res(tree &x){
    queue <tree> b;
    b.push(x);
    int cnt = 0;
    while (!b.empty()){
        tree temp = b.front();
        b.pop();
        if (!temp->left && !temp->right){
            ++cnt;
            continue;
        }
        if (temp->left){
            b.push(temp->left);
        }
        if (temp->right){
            b.push(temp->right);
        }
    }
    cout << cnt << endl;
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
        tree b = NULL;
        build(b, 0, n - 1);
        res(b);
        a.clear();
    }
    return 0;
}