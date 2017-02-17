#include <algorithm>
class Solution
{
  public:
    static bool isLeaf(TreeNode *node) { return !node->left && !node->right; };
    /* walk the tree, operating on sum */
    static void findLeaf(TreeNode *node, TreeNode *leaf, int &max_path_sum, int path_sum)
    {
      if (!node) return;                // base case
      path_sum += node->value;          // update path total
      if (isLeaf(node)) {               // node has 0 children?
        if (path_sum > max_path_sum) {  // max_path_sum encountered?
          max_path_sum = path_sum;      // ...update max_path_sum
          leaf = node;                  // ...update leaf ptr
        }
      }
      findLeaf(node->left, leaf, max_path_sum, path_sum);  // recurse left
      findLeaf(node->right, leaf, max_path_sum, path_sum); // recurse right
    };
    
    static int maxSum(TreeNode *root)
    {
      int max=0;                     // stores max_path_sum                 
      TreeNode *leaf;                // ptr to max_path leaf
      findLeaf(root, leaf, max, 0);  // start the sum at 0
      return max;                    // return max_path_sum
    };
};
