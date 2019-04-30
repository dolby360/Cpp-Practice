#include "stdafx.h"
#include <math.h>
#include "util.hpp"
#include <algorithm> 

int timeToNumber(string time);
string getRange(string str);

class Stat
{
public:
  static std::string stat( const std::string &strg );
  static void statTest();
};

int timeToNumber(string time){
    vector<string> vec = split(time,'|');
    int ret = 0;
    int mul = 60 * 60; 
    int size = vec.size();
    int numberOfExpectedVars = 3;
    int error = -1;
    if(size != numberOfExpectedVars ){ return error;}
    for(int i = 0; i < size; i++){
        ret += stoi(vec[i]) * mul;
        mul = mul / 60;
    }
    return ret;
}
string getFormatedNumber(const int n){
    if(n < 10){
        return "0" + to_string(n);
    }return to_string(n);
}

string numberToTime(int num){
    double h = floor ( (double)num / (double)(3600) );
    double m = floor (num % 3600 / 60);
    double s = floor (num % 3600 % 60);
    return getFormatedNumber( (int)h ) + "|" + getFormatedNumber( (int)m ) + "|" + getFormatedNumber( round(s) );
}

int getMin(vector<int> vec){
    int min = vec[0];
    for(int i = 0; i < vec.size(); i++){
        if(min > vec[i]){
            min  = vec[i];
        }
    }
    return min;
}

int getMax(vector<int> vec){
    int max = vec[0];
    for(int i = 0; i < vec.size(); i++){
        if(max < vec[i]){
            max = vec[i];
        }
    }
    return max;
}

string getRange(string str){
    vector<string> competitore = split(str,',') ;
    vector<int> compTime;
    string ret;
    for(int i = 0; i < competitore.size(); i++){
        compTime.push_back( timeToNumber(competitore[i]) );
    }
    //cout << "->" << getMax(compTime) - getMin(compTime) << endl;
    ret = numberToTime( getMax(compTime) - getMin(compTime) );
    return ret;
}

int sum(vector<int> vec){
    int ret = 0;
    for(int i = 0; i <  vec.size(); i++){
        ret += vec[i];
    }
    return ret;
}

string getAverage(const string str){
    vector<string> competitore = split(str,',');
    vector<int> compTime;
    for(int i = 0; i < competitore.size(); i++){
        compTime.push_back( timeToNumber(competitore[i]) );
    }
    if(compTime.empty()){return "";}
    //cout <<  (double)sum(compTime) / (double)compTime.size() << endl;
    return numberToTime( sum(compTime) / compTime.size());
}

string getMedian(string str){
    vector<string> comp = split(str,',');
    vector<int> compTime;
    int med = 0;
    int temp = 0;
    for(int i = 0; i < comp.size(); i++){
        compTime.push_back( ( timeToNumber(comp[i]) ) );
    }
    std::sort(compTime.begin(),compTime.end(),[](int i,int j){return i < j;} );
    if(compTime.size() % 2 != 0){
        med = (int)(compTime.size() / 2);
        return numberToTime(compTime[med]);
    }else{
        med = (int)(compTime.size() / 2) - 1;
        // printVec(compTime);
        // cout << med << endl;
        // cout << compTime[med] << " - " << compTime[med + 1] << endl;
        temp = compTime[med] + compTime[med + 1] ;
        return numberToTime(temp / 2);
    }
}

string Stat::stat(const string &strg){
    if(strg == ""){return "";}
    string ret = "Range: ";
    ret += getRange(strg);
    ret += " Average: ";
    ret += getAverage(strg);
    ret += " Median: ";
    ret += getMedian(strg);
    cout << ret << endl;
    return ret;
}

void Stat::statTest(){
    string l = "01|15|59, 1|47|16, 01|17|20, 1|32|34, 2|17|17";
    string sol = "Range: 01|01|18 Average: 01|38|05 Median: 01|32|34";
    if(stat(l) != sol ){ cout << ":(0" << endl; }
    l = "02|15|59, 2|47|16, 02|17|20, 2|32|34, 2|17|17, 2|22|00, 2|31|41";
    sol = "Range: 00|31|17 Average: 02|26|18 Median: 02|22|00";
    if(stat(l) != sol ){ cout << ":(1" << endl; }
    l = "02|15|59, 2|47|16, 02|17|20, 2|32|34, 2|32|34, 2|17|17";
    sol = "Range: 00|31|17 Average: 02|27|10 Median: 02|24|57";
    if(stat(l) != sol ){ cout << ":(2" << endl; }
    l = "1|19|34, 00|15|59, 2|32|34, 13|19|34, 1|22|34, 1|15|59, 1|22|34, 2|47|16";
    sol = "Range: 13|03|35 Average: 03|02|00 Median: 01|22|34";
    if(stat(l) != sol ){ cout << ":(3" << endl; }
    
    l = "11|15|59, 10|16|16, 12|17|20, 9|22|34, 13|19|34, 11|15|17, 11|22|00, 10|26|37, 12|17|48, 9|16|30, 12|20|14, 11|25|11";
    sol = "Range: 04|03|04 Average: 11|14|36 Median: 11|18|59";
    if(stat(l) != sol ){ cout << ":(4" << endl; }


    l = "11|15|59, 1|26|37, 2|32|34, 1|16|16, 1|17|48, 12|17|20, 11|22|00, 13|19|34, 02|15|59, 2|31|41, 00|22|34, 2|22|00, 2|32|34, 01|15|59";
    sol = "Range: 12|57|00 Average: 04|43|29 Median: 02|26|50";
    if(stat(l) != sol ){ cout << ":(5" << endl; }

}
