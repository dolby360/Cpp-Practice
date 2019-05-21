#include "../stdafx.h"
#include <map>

using V = std::vector<int>; 

class oddInt
{
public:
    int findOdd(const std::vector<int>& numbers);
};

/*Option 2*/
int findOdd(const std::vector<int>& numbers){
    int i = 0;
    int res = 0;
    for(i = 0; i < numbers.size(); i++){
        res ^= numbers[i];
    }
    return res;
}

/*Option 1*/
// int findOdd(const std::vector<int>& numbers){
//     std::map<int,int> numMap;
//     for(auto i : numbers){
//         auto it = numMap.find(i);
//         if( it == numMap.end() ){
//             numMap[i] = 0;
//         }
//         numMap[i] += 1;
//     }
//     for(auto i : numMap){
//         if(i.second % 2 != 0){
//             return i.first;
//         }
//     }
//     return 0;
// }

void test(){
    int res = findOdd(V{20,1,-1,2,-2,3,3,5,5,1,2,4,20,4,-1,-2,5});
    cout << res <<endl;

}