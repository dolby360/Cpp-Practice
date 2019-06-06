#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

// string getCharsInRangeAndOrderd(const string str,const char a,const char b){
//   string temp;
//   for(int i = 0; i < str.size(); i++){
//     if(str[i] >= a && str[i] <= b){
//       temp += str[i];
//     }
//   }
//   std::sort(temp.begin(), temp.end());
//   cout << "************" << endl;
//   cout << str << endl;
//   cout << temp << endl;
//   cout << "************" << endl;
//   return temp;
// }


// bool isAnagram(std::string test, std::string original){
//   cout << endl;
//   if(getCharsInRangeAndOrderd(test,'a','z') !=   getCharsInRangeAndOrderd(original,'a','z')){
//     return false;
//   }
//   if(getCharsInRangeAndOrderd(test,'A','Z') !=   getCharsInRangeAndOrderd(original,'A','Z')){
//     return false;
//   }
//   return true;
// }


bool isAnagram(std::string test, std::string original){
    std::transform(test.begin(), test.end(), test.begin(), ::tolower);
    std::transform(original.begin(), original.end(), original.begin(), ::tolower);
    std::sort(test.begin(), test.end());
    std::sort(original.begin(), original.end());
    return original == test;
}