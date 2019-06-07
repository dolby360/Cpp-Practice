
#include <vector>
#include <string>

using VS = std::vector<std::string>;

class DirReduction
{
public:
    static VS dirReduc(VS &arr);
};

bool oposit(std::string s1,std::string s2){
    if(s1 == "NORTH" && s2 == "SOUTH"){
        return true;
    }
    if(s1 == "EAST" && s2 == "WEST"){
        return true;
    }
    if(s2 == "NORTH" && s1 == "SOUTH"){
        return true;
    }
    if(s2 == "EAST" && s1 == "WEST"){
        return true;
    }
    return false;
}

VS DirReduction::dirReduc(VS &arr){
    if(arr.size() > 0){
        for(int i = 1; i < arr.size(); i++){
            if( opposite(arr[i-1],arr[i] ) ){
                arr.erase(arr.begin() + (i-1),arr.begin() + i+1);
                /*Recursively reduce*/
                dirReduc(arr);
            }
        }
    }
    return arr;
}