// Last updated: 7/26/2026, 4:01:50 PM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void right(TreeNode* &root, int level,vector<int> &res){
        if(root==nullptr){
            return;
        }
        if(level==res.size()){
            res.push_back(root->val);
        }
        right(root->right,level+1,res);
        right(root->left,level+1,res);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        right(root,0,res);
        return res;
    }
};