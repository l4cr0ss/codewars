struct node
{
  int value;
  struct node* left;
  struct node* right;
};


// Do an inorder traversal
int sumTheTreeValues(struct node* root) {
	int sum = 0;
  if (root->left) sum += sumTheTreeValues(root->left);
  sum += root->value;
  if (root->right) sum += sumTheTreeValues(root->right);
 	return sum; 
}
