#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void level_order_traversal(TreeNode *root)
{
  if (root == NULL)
    return;
  queue<TreeNode *> q;

  q.push(root);

  while (!q.empty())
  {
    TreeNode *current = q.front();

    cout << current->val << " ";

    q.pop();
    if (current->left != NULL)
    {

      q.push(current->left);
    }
    if (current->right != NULL)
    {

      q.push(current->right);
    }
  }
}

vector<vector<int>> levelOrder(TreeNode *root)
{
  vector<vector<int>> ans = {};
  if (root == NULL)
    return ans; // if root is NULL, we return empty vector

  queue<TreeNode *> q;
  q.push(root); // if root is not NULL we push it into the queue

  while (!q.empty())
  { // while queue is not empty

    int len = q.size(); // Size of queue is same as number of elements in the current level of the tree. e.g. root, being the level 1, always has 1 element and in a binary tree there can be at max 2 elements in level 2, 4 elements in level 3 and so on.

    // The level of the tree shifts ahead by one after each iteration, Level 1 being the one in first iteration.

    vector<int> arr(len, 0); // Initialising a vector of length as number of elements in the current level with zeroes.

    // Storing current level's elements into the arr and pushing the addresses of left and right node of the elements into the queue.

    for (int i = 0; i < len; i++)
    {

      TreeNode *pointer = q.front();
      arr[i] = pointer->val;

      if (pointer->left)
        q.push(pointer->left);
      if (pointer->right)
        q.push(pointer->right);

      q.pop();
    }

    // Pushing back the current level's elements into the vector containing the elements as level order traversal.

    ans.push_back(arr);
  }

  return ans;
}

int main()
{
  TreeNode *root = new TreeNode(1);
  root->left = new TreeNode(3);
  root->right = new TreeNode(2);


  vector<vector<int>> ans = levelOrder(root);
  for (int i = 0; i < ans.size(); i++)
  {
    for (int j = 0; i < ans[i].size(); j++)
    {
      cout << ans[i][j] << " ";
    }
  }
}
