#include <vector>

std::vector<int> tribonacci(std::vector<int> signature, int n){
    std::vector<int> ret;
    ret.reserve(n);
    for(int i = 0; i < 3 && i < n; i++){
        ret.push_back( signature[i] );
    }
    while( ret.size() < n ){
        ret.push_back( ret[ret.size() - 1] + ret[ret.size() - 2] + ret[ret.size() - 3] );
    }
    return ret;
}