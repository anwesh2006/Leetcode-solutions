// Last updated: 7/28/2026, 10:13:11 PM
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
14    int height(TreeNode* root,int &maxi){
15        if(root==nullptr) return 0;
16        int lh = height(root->left,maxi);
17        int rh = height(root->right,maxi);
18        maxi = max(maxi,lh+rh);
19        return 1+(max(lh,rh));
20    }
21    int diameterOfBinaryTree(TreeNode* root) {
22        int maxi = 0;
23        height(root,maxi);
24        return maxi;
25    }
26};