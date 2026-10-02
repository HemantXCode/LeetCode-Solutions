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
    void pankaj(TreeNode*root, vector<int>&v){
        if(root==nullptr){
            return;
        }
        pankaj(root->left,v);
        v.push_back(root->val);
        pankaj(root->right,v);
    }
    
    
    int findSecondMinimumValue(TreeNode* root) {
        vector<int>v;
        pankaj(root,v);
        sort(v.begin(),v.end());

        for(int i=0;i<v.size();i++){
            if(v[i]!= v[0]){
                return v[i];
            }

        }
        return -1;
    }
};