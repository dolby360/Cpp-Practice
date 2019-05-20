#include "../stdafx.h"
#include "../util.hpp"
bool valid_braces(string braces);

void vBracesTest(){
    if(valid_braces("(){}[]")){ /*cout << ":)" << endl;*/ }     else { cout << ":(1" << endl; }
    if(valid_braces("([{}])")){ /*cout << ":)" << endl;*/ }     else { cout << ":(2" << endl; }
    if(valid_braces("(}")){ cout << ":(3" << endl; }         //else { cout << ":)" << endl; }
    if(valid_braces("[(])")){ cout << ":(4" << endl; }       //else { cout << ":)" << endl; }   
    if(valid_braces("[({})](]")){ cout << ":(5" << endl; }   //else { cout << ":)" << endl; }
    if(valid_braces("((([[[{{{")){ cout << ":(6" << endl; }   //else { cout << ":)" << endl; }
    if(valid_braces("((()}}")){ cout << ":(7" << endl; }   //else { cout << ":)" << endl; }
}

bool pushToVec(char c);
int getInd(char c,vector<char> vec);
bool in(char c,vector<char> &vec);

vector<char> vecOpen;

vector<char> open = {'{','[','('};
vector<char> close = {'}',']',')'};


bool in(char c,vector<char> &vec){
    for(int i = 0; i < vec.size(); i++){
        if(vec[i] == c){
            return true;
        }
    }
    return false;
}

int getInd(char c,vector<char> vec){
    for(int i = 0; i < vec.size(); i++){
        if(vec[i] == c){return i;}
    }
    return -1;
}

bool pushToVec(char c){
    if( in(c,open) ){
        vecOpen.push_back(c);
        return true;
    }else if(in(c,close)){
        if( getInd(vecOpen.back(),open) == getInd(c,close) ){
            vecOpen.pop_back();
            return true;
        }        
    }
    return false;
}

bool valid_braces(string braces) {
    char cur = '\0';

    vecOpen.clear();

    for(int i = 0; i < braces.size(); i++){
        
        if(vecOpen.empty() && in(braces[i],open)){
            cur = braces[i];
            vecOpen.push_back(cur);
            continue;
        }else if(vecOpen.empty() && in(braces[i],close) ){
            return false;
        }
        cur = braces[i];
        if( pushToVec(cur) == false ) { return false; }
    }
    if( vecOpen.empty() == false ){return false;}
    return true;
}

