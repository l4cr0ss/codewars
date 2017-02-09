class Kata
{
public:
    std::vector<int> foldArray(std::vector<int> array, int runs)
    {
      for(int i=0; i<runs; i++) {                                                      // for [i, runs)
        int newSize = ((array.size() % 2 == 0) ? array.size()/2 : array.size()/2 + 1); // set the size of the new array
        auto right = std::next(array.begin(), newSize);                                // ptr to start of right half
        auto left = ((array.size() % 2 == 0) ? right-1 : right-2);                     // ptr to end of left half
        for(right; right != array.end(); right++, left--) *left = *left + *right;      // fold
          array.resize(newSize);                                                       // truncate right half
      }                                                                                // end for
      return array;                                                                    // return folded array
    }
};
