class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return dfsHeight(root) != -1;
    }
    
    int dfsHeight(TreeNode* root){
        
        if(root == NULL) return 0;
        
        int leftH = dfsHeight(root->left);
            if(leftH == -1) return -1;
        
        int rightH = dfsHeight(root->right);
            if(rightH == -1) return -1;
        
        if(abs(leftH - rightH ) > 1) return  -1;
        
        return 1 + max(leftH,rightH);
        
    }
};