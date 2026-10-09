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
    bool pankaj(TreeNode*root, int k){
        if(root==nullptr){
            return true;
        }
        if(root->val!=k){
            return false;
        }
        return (pankaj(root->left,k) && pankaj(root->right,k));
    }
    
    
    bool isUnivalTree(TreeNode* root) {
        int k= root->val;
        return pankaj(root,k);
    }
};