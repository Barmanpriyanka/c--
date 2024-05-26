#include <iostream>
#include <unordered_map>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int value) : val(value), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    TreeNode* buildTree(int pre[], int in[], int pre_start, int pre_end, int in_start, int in_end, unordered_map<int, int>& inorder_index) {
        if (pre_start > pre_end || in_start > in_end) {
            return nullptr;
        }

        int root_val = pre[pre_start];
        TreeNode* root = new TreeNode(root_val);
        int in_idx = inorder_index[root_val];

        int left_subtree_size = in_idx - in_start;

        root->left = buildTree(pre, in, pre_start + 1, pre_start + left_subtree_size, in_start, in_idx - 1, inorder_index);
        root->right = buildTree(pre, in, pre_start + left_subtree_size + 1, pre_end, in_idx + 1, in_end, inorder_index);

        return root;
    }

    TreeNode* buildTree(int pre[], int in[], int n) {
        unordered_map<int, int> inorder_index;
        for (int i = 0; i < n; i++) {
            inorder_index[in[i]] = i;
        }
        return buildTree(pre, in, 0, n - 1, 0, n - 1, inorder_index);
    }
};

void inorderTraversal(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    inorderTraversal(root->left);
    std::cout << root->val << " ";
    inorderTraversal(root->right);
}

int main() {
    int preorder[] = {3, 9, 20, 15, 7};
    int inorder[] = {9, 3, 15, 20, 7};
    int n = sizeof(preorder) / sizeof(preorder[0]);

    Solution solution;
    TreeNode* root = solution.buildTree(preorder, inorder, n);

    cout << "Inorder Traversal of the Constructed Tree: ";
    inorderTraversal(root);
    cout << endl;

return 0;
}