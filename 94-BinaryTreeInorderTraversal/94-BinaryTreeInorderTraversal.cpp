// Last updated: 7/26/2026, 4:02:10 PM
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
    void inOrder(vector<int> &arr,TreeNode *node){
        if(node==nullptr){
            return;
        }
        inOrder(arr,node->left);
        arr.push_back(node->val);
        inOrder(arr,node->right);

    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> arr;
        inOrder(arr,root);
        return arr;
    }
};