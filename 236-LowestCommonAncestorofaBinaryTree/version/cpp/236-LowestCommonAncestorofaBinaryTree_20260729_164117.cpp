// Last updated: 7/29/2026, 4:41:17 PM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10class Solution {
11public:
12
13    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
14        if(root==nullptr || root==p || root==q) return root;
15        TreeNode* left = lowestCommonAncestor(root->left,p,q);
16        TreeNode* right = lowestCommonAncestor(root->right,p,q);
17        if(left == nullptr){
18            return right;
19        } else if(right == nullptr){
20            return left;
21        }
22        else{
23            return root;
24        }
25
26    }
27};