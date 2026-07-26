// Last updated: 7/26/2026, 4:02:02 PM
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
    void fun(vector<int> &arr,TreeNode* root){
        if(root==nullptr){
            return;
        }
        arr.push_back(root->val);
        fun(arr,root->left);
        fun(arr,root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> arr;
        fun(arr,root);
        return arr;
    }
};