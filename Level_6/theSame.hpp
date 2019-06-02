#include "../stdafx.h"
#include <map>

class Same {
public:
    static bool comp(vector<int>, vector<int>);
};

bool Same::comp(vector<int> values, vector<int> squared_values){
    if(values.size()!=squared_values.size()){
        return false;
    }
    std::map<int,int> squared_values_map;
    for(const int squared_value : squared_values) {
        squared_values_map[squared_value]+=1;
    }
    for(const int value : values) {
        if((squared_values_map[value*value]-=1)<0){ 
            return false;
        }
    }
    return true;
}
