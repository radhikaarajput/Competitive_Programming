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

//using bfs queue
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
        vector<vector<int>> res;
        if(root==NULL) return res;
        
        queue<TreeNode*>q;
        q.push(root);
        int siz=q.size();
        bool revToggle=false;
        
        while(!q.empty())
        {
            siz= q.size();
            vector<int> v;
            while(siz>0)
            {   
                //take element root from queue put it in vector and remove it from queue
                root = q.front();
                q.pop();
                v.push_back(root->val);
                
                //put root left right in queue
                if(root->left!=NULL) q.push(root->left);
                if(root->right!=NULL) q.push(root->right);

                
                siz--;
                
            }
            if(revToggle) reverse(v.begin(), v.end());
            res.push_back(v);
            revToggle=!revToggle;
        }
        
        return res;
    }
};