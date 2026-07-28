// Last updated: 7/28/2026, 11:00:41 PM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    int h(TreeNode* root){
15        if(root==nullptr) return 0;
16        int lh = h(root->left);
17        int rh = h(root->right);
18        if(lh==-1 || rh ==-1) return -1;
19        if(abs(lh-rh)>1) return -1;
20        return 1+max(lh,rh);
21    }
22    bool isBalanced(TreeNode* root) {
23        if(root==nullptr) return true;
24        if(h(root)==-1) return false;
25        return true;
26    }
27
28};