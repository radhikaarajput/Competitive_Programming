class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        vector<vector<int>> ans;
        vector<int>v;
    
        //no root present 
        if(!root)
            return ans;
        
       //push root in queue and NULL as first level done 
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        
        while(!q.empty())
        {
            //take out the front from the queue
            TreeNode* temp = q.front();
              q.pop();
            
                if(temp==NULL)    //done with a level
                { 
                    ans.push_back(v);
                    v.clear();

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


/*
102. Binary Tree Level Order Traversal
Medium

5034

109

Add to List

Share
Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).

 

Example 1:


Input: root = [3,9,20,null,null,15,7]
Output: [[3],[9,20],[15,7]]
Example 2:

Input: root = [1]
Output: [[1]]
Example 3:

Input: root = []
Output: []


*/