#include "stdafx.h"

//TODO: print other types beside string
void printVec(vector<int> vec){
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;
}

void printVec(vector<string> vec){
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;
}

vector<int> reverseVec(vector<int> vec){
    vector<int>::iterator it;
    vector<int> ret;
    for(it = vec.end() - 1; it != vec.begin() - 1; it--){
        ret.push_back(*it);
    }
    return ret;
}

vector<string> split(string str,char c){
    vector<string> temp;
    string toPush;
    if(str[0] == c)           { str.erase(str.begin() ); }
    if(str[str.size()-1] == c){ str.erase(str.end() -1  );  }
    for(int i = 0; i <= str.size(); i++){
        if( str[i] == c ){
            while(str[i+1] == c && i < str.size()){i++;}
            temp.push_back(toPush);
            toPush = "";
        }else if(i == str.size()){
            temp.push_back(toPush);
        }
        else{
            toPush += str[i];
        }
    }
    return temp;
}