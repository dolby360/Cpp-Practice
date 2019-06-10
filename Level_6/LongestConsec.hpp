#include <string>
#include <vector>

using VS = std::vector<std::string>;

class LongestConsec
{
public:
    static std::string longestConsec(VS &strarr, int k);
};

std::string LongestConsec::longestConsec(VS &vec, int k){
    if(vec.size() == 0 || k > vec.size() || k <= 0){ return "";}
    //std::cout << "no problem" << std::endl;
    std::string ret;
    int start = 0;
    int sum = 0;
    for(int i = 0; i < k; i++){
        sum += vec[i].size();
    }
    int max = sum;
    int j = 0;

    for(int t = k; t < vec.size(); t++){
        sum += vec[t].size();
        sum -= vec[j++].size();
        if(sum > max){
            max = sum;
            start = j;
        }
    }
    for(int i = start ; i < (k+start) ; i++){
        ret += vec[i];
    }
    return ret;
}