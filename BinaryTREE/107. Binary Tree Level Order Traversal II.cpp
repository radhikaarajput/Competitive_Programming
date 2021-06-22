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
    vector<vector<int>> levelOrderBottom(TreeNode* root) 
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
         reverse(ans.begin(),ans.end());
        return ans;
    }
};


/*

107. Binary Tree Level Order Traversal II
Medium

2263

254

Add to List

Share
Given the root of a binary tree, return the bottom-up level order traversal of its nodes' values. (i.e., from left to right, level by level from leaf to root).

 

Example 1:


Input: root = [3,9,20,null,null,15,7]
Output: [[15,7],[9,20],[3]]
Example 2:

Input: root = [1]
Output: [[1]]
Example 3:

Input: root = []
Output: []
*/