#include "stdafx.h"
#include "util.hpp"
#define ERROR -1

class Cypher{
public:
    static std::vector<int> Encode(std::string str, int n);
    static bool EncodeTest();
private:
    static int getVaule(char n);
    static vector<int> getIntAsList(int);
    static int index;
};

vector<int> Cypher::getIntAsList(int n){
    vector<int> ret;
    while(n){
        ret.push_back(n%10);
        n = n/10;
    }
    ret = reverseVec(ret);
    return ret;
}

int Cypher::getVaule(char n){
    if(n > 122 || n < 97){
        return ERROR;
    }
    return n - 96;
}

/*First idea*/

// vector<int> Cypher::Encode(string str, int n){
//     vector<int> ret;
//     vector<int> nList = getIntAsList(n);
//     for(int i = 0; i < str.size(); i++){
//         ret.push_back(Cypher::getVaule(str[i]));
//     }
//     for(int i = 0; i < ret.size(); i++){
//         ret[i] += nList[ i % nList.size() ];
//     }
//     return ret;
// }

/*Improved code*/
vector<int> Cypher::Encode(string str, int n){
    vector<int> ret;
    string nString = to_string(n);
    for(auto cur : str){
        ret.push_back( cur - 'a' + 1 );
    }
    for( int i = 0; i < ret.size() ; i++ ){
        ret[i] +=  (int)( nString[ i % nString.length() ] ) - 48;
    }
    return ret;
}

bool Cypher::EncodeTest(){
    vector<int> res = Encode("scout",1939);
    vector<int> expect{20, 12, 18, 30, 21};
    if(res == expect){
        cout << ":)" << endl;
        return true;
    }else{
        cout << ":(" << endl;
        return false;
    }
}