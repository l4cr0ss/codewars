#include <stdio.h>
class Kata
{
public:
    std::vector<std::string> towerBuilder(int nFloors)
    {
        std::vector<std::string> output;                                    // vector to hold output
        int chars, i, j;                                                    // control variables
        for (i=nFloors, j=0; i>0; i--, j++) {                               // for each floor
          chars = i*2-1;                                                    // ...calc # of chars to print
       		std::string line (nFloors*2-1, ' ');                              // ...build the char frame
          for (auto it=line.begin()+j; chars > 0; it++, chars--) *it = '*'; // ...calc offset for token start && print 
          output.push_back (line);                                          // ...save frame in output
        }
        std::reverse(output.begin(), output.end());                         // reverse the upside-down "tower"
        return output;                                                      // return the output
    }
};
