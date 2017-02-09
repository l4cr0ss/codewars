/* a much more clever solution, by yigityuce */
class Kata
{
public:
    std::vector<std::string> towerBuilder(int nFloors)
    {
      std::vector<std::string> output;                   // vector to hold output
      for(int i=0; i<nFloors ; i++)                      // iterate floors
      {
        output.push_back(std::string(nFloors-i-1,' ') +  // calculate left pad
                      std::string((i*2)+1,'*') +         // write tokens
                      std::string(nFloors-i-1,' '));     // calculate right pad
      }
      return output;                                     // return output
    }
};
