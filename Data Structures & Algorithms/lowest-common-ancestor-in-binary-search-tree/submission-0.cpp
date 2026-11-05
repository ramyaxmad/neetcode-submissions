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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        //if p and q > root --> look in right subtree
        //if p and q < root --> look at left subtree
        //if 1 (p or q) is > and 1 is less --> LCA = root
        //if p or q is the root --> LCA = root
        TreeNode* lca;
        while (true) {
            if (p->val < root->val && q->val < root->val)
                root = root->left;
            else if (p->val > root->val && q->val > root->val)
                root = root->right;
            else if (p->val > root->val && q->val < root->val)
                return root;
            else if (p->val < root->val && q->val > root->val)
                return root;
            else if (p->val == root->val || q->val == root->val)
                return root;
        }
    }
};
