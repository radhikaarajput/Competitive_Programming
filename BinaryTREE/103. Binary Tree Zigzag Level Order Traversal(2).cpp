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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
         vector<vector<int>> ans;
        vector<int>v;
    
        //no root present 
        if(!root)
            return ans;
        
       //push root in queue and NULL as first level done 
        //NULL--> way to show that a level done
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        bool toggle=false;
        
        while(!q.empty())
        {
            //take out the front from the queue
            TreeNode* temp = q.front();
              q.pop();
            
                if(temp==NULL)    //done with a level
                { 
                    
                    //toggle our ans, reverse vector alternatively
                    if(toggle)
                    {
                        reverse(v.begin(), v.end());
                        toggle=!toggle;
                         ans.push_back(v);
                         v.clear();
                    }
                    else
                    {
                        toggle=!toggle;
                         ans.push_back(v);
                         v.clear();
                    }
                   

                    if(!q.empty())   q.push(NULL);    //for last level, as no elements left incase
                }
                else
                {
                  //put the front of queue i.e. temp in answer
                    v.push_back(temp->val); 
                    
                    //if its left right exist then put them too in queue
                    if(temp->left) q.push(temp->left);
                    if(temp->right) q.push(temp->right);
                }
   
        }
        
        return ans;
        
    }
};