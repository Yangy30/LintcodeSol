class TreeNode{
public:
	int val;
	TreeNode *left, *right;
	TreeNode(int val){
		this->val = val;
		this->left = this->right = NULL;
	}
};

class DoublyListNode{
public:
	int val;
	DoublyListNode *next, *prev;
	DoublyListNode(int val){
		this->val = val;
           this->prev = this->next = NULL;
       }
   };
 
class Solution {
public:
    /**
     * @param root: The root of tree
     * @return: the head of doubly list node
     */
    DoublyListNode* bstToDoublyList(TreeNode* root) {
        // Write your code here
    }
};