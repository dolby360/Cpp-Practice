#include <string>
#include <algorithm>
using namespace std;


bool isAnagram(std::string test, std::string original){
    std::transform(test.begin(), test.end(), test.begin(), ::tolower);
    std::transform(original.begin(), original.end(), original.begin(), ::tolower);
    std::sort(test.begin(), test.end());
    std::sort(original.begin(), original.end());
    return original == test;
}