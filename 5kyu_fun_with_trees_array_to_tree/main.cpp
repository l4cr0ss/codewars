#include <vector>
class Solution
{
  public:
    static TreeNode* arrayToTree(std::vector<int> arr) 
    {
        std::deque<TreeNode**> deck;
        TreeNode *root;
        deck.push_back(&root);
        for (int i=0; i<arr.size(); i++) {
          TreeNode **next = deck.front();
          *next = new TreeNode(arr[i]); 
          deck.push_back(&(*next)->m_left);
          deck.push_back(&(*next)->m_right);
          deck.pop_front();
        }
        return arr.size() == 0 ? nullptr : root;
    };
};
