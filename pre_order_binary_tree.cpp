/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
/*
vector<int> v;
void getpreOrder(TreeNode<int> *root)
{
    if(root==NULL) return;
    v.push_back(root->data);
    getpreOrder(root->left);
    getpreOrder(root->right);
}
vector<int> preOrder(TreeNode<int> *root) {
  v.clear();
  getpreOrder(root);
  return v;
}
*/