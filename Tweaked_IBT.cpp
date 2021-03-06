#include <vector>

using namespace std;

/*
* 扭转后等价的二叉树：
* 扭转的定义是：交换任意节点的左右子树。
* 等价的定义是：两棵二叉树必须为相同的结构，并且对应位置上的节点的值要相等。
*/

/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */
class Solution {
public:
    /**
     * @aaram a, b, the root of binary trees.
     * @return true if they are tweaked identical, or false.
     */
    bool isTweakedIdentical(TreeNode* a, TreeNode* b) {
        if(a == NULL && b == NULL) return true;
        if(a == NULL || b == NULL) return false;
        if(a->val != b->val)  return false;

        if(isTweakedIdentical(a->left, b->left) && isTweakedIdentical(a->right, b->right)) return true;
        if(isTweakedIdentical(a->left, b->right) && isTweakedIdentical(a->right, b->left)) return true;
        return false;
    }
};
// need change
