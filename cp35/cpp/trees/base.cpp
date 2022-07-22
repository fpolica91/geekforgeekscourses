#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    vector<Node *> children;

    Node() {}

    Node(int _val)
    {
        val = _val;
    }

    Node(int _val, vector<Node *> _children)
    {
        val = _val;
        children = _children;
    }
};

void preorder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    for (int i = 0; i < root->children.size(); i++)
    {
        preorder(root->children[i]);
    }
}
void buildFromPreorder(Node *root, vector<int> &ans)
{
    if (root == NULL)
        return;
    ans.push_back(root->val);
    for (int i = 0; i < root->children.size(); i++)
    {
        buildFromPreorder(root->children[i], ans);
    }
}

int main()
{
    vector<int> res;
    Node *root = new Node(1);
    root->children.push_back(new Node(3));
    root->children.push_back(new Node(2));
    root->children.push_back(new Node(4));
    preorder(root);
    cout << "end of preorder \n";
    buildFromPreorder(root, res);
    for(auto x: res){
        cout << x << " ";
    }
}