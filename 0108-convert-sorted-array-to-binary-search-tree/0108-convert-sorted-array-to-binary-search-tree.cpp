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
    TreeNode* build(vector<int> nums,int l,int h){
        int mid = (l+h)/2;
        TreeNode* d1 = new TreeNode(nums[mid]);
        if(l>h){
            return nullptr;
        }
        d1->left = build(nums,l,mid-1); //using divide and conquer 
        d1->right = build(nums,mid+1,h);
        return d1;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int l = 0;
        int h = nums.size()-1;
        int mid = (l+h)/2;
        TreeNode* root = new TreeNode(nums[(l+h)/2]);
        root->left = build(nums,l,mid-1);
        root->right = build(nums,mid+1,h);
        return root;
    }
};