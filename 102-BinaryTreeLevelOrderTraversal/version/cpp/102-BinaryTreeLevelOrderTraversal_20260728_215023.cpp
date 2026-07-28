// Last updated: 7/28/2026, 9:50:23 PM
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
14    vector<vector<int>> levelOrder(TreeNode* root) {
15        vector<vector<int>> res;
16        if(root==nullptr) return res;
17        queue<TreeNode* > q;
18        q.push(root);
19        while(!q.empty()){
20            int size = q.size();
21            vector<int> ans;
22            for(int i=0;i<size;i++){
23                TreeNode* temp = q.front();
24                q.pop();
25                if(temp->left != nullptr) {
26                    q.push(temp->left);
27                } 
28                if(temp->right != nullptr){
29                    q.push(temp->right);
30                }
31                ans.push_back(temp->val);
32            }
33            res.push_back(ans);
34        }
35        return res;
36    }
37};