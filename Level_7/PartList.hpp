#include <sstream> 
#include <iterator> 
#include <vector>
#include <string> 
#include <algorithm>

using VPS = std::vector<std::pair<std::string, std::string>>;
using VS = std::vector<std::string>;
using PS = std::pair<std::string,std::string>;

class PartList
{
public:
    static VPS partlist(VS &arr);
};

VPS PartList::partlist(VS &arr){
    VPS ret;
    std::string tempLeft;
    std::string tempRight;
    for(int i = 1; i < arr.size() ; i++){
        std::ostringstream left;
        std::ostringstream right; 
        std::copy( arr.begin(),arr.begin() + i, std::ostream_iterator<std::string>(left, " ")); 
        std::copy( arr.begin() + i, arr.end(), std::ostream_iterator<std::string>(right, " ")); 
        tempLeft = left.str();
        tempRight = right.str();
        tempLeft.erase(tempLeft.end() - 1);
        tempRight.erase(tempRight.end() - 1);
        ret.push_back (
            PS(tempLeft,tempRight)
        );
    }    
    return ret;
}
