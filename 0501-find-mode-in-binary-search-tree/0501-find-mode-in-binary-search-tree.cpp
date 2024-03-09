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
    
   /* static bool compare(const pair<char, int>& a, const pair<char, int>& b) {
        return a.second < b.second;
    }
    */
    map<int,int> mp;
    void traverseTree(TreeNode *root){
        if(root){
            traverseTree(root->left);
            mp[root->val]++;
            traverseTree(root->right);
        }
    }
    
    vector<int> findMode(TreeNode* root) {
        traverseTree(root); 
        int mx = 0;
       
        for(auto cnt:mp){
            mx=max(cnt.second, mx);
        }  
        vector<int>res;
        for(auto cnt:mp){
            if(cnt.second == mx){
                res.push_back(cnt.first);
            }
        }         
        return res;
    }
};