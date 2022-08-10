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
    TreeNode* invertTree(TreeNode* root) {
        //recursive
        if(root == NULL){
            return root;
        }
        
        invertTree(root->left);
        invertTree(root->right);
        
        // swap(root->left, root->right);
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;
        
        return root;
        
        //iterative
//         stack<TreeNode*> s;
//         s.push(root);
        
//         while(!s.empty()){
//             TreeNode* curr = s.top();
//             s.pop();
//             if(!curr) continue;
//             s.push(curr->left);
//             s.push(curr->right);
        
//             TreeNode* temp = curr->left;
//             curr->left = curr->right;
//             curr->right = temp;
//             // swap(curr->left, curr->right);
//         }
//         return root;
    }
};