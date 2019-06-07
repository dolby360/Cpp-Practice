
#include <string>
#include <iostream>
#include <algorithm>
#include "../util.hpp"

class Opstrings
{
public:
    static std::string vertMirror(const std::string &strng);
    static std::string horMirror(const std::string &strng);
    template<typename Func>
    static std::string oper( Func func , const std::string &s);
};

std::string Opstrings::vertMirror(const std::string &strng){
    std::string temp = strng;
    std::vector<std::string> vec = split(temp,'\n');
    for(int i = 0; i < vec.size(); i++){
        std::reverse(vec[i].begin(),vec[i].end());
    }
    temp = vec[0];
    for(int i = 1; i < vec.size(); i++){
        temp += '\n';
        temp += vec[i];
    }
    return temp;
}

std::string Opstrings::horMirror(const std::string &strng){
    std::string temp = strng;
    std::vector<std::string> vec = split(temp,'\n');
    temp = vec[vec.size() - 1];
    for(int i = vec.size() - 2; i >= 0; i--){
        temp += '\n';
        temp += vec[i];
    }
    return temp;
}

template<typename Func>
std::string Opstrings::oper(Func func , const std::string &s){
    return func(s);
}
