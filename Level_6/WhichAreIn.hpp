
#include <vector>
#include <string>
#include <map>
class WhichAreIn
{
  public:
  static std::vector<std::string> inArray(std::vector<std::string> &array1, std::vector<std::string> &array2);
};

std::vector<std::string> WhichAreIn::inArray(std::vector<std::string> &array1, std::vector<std::string> &array2){
    std::vector<std::string> result;
    for (std::string a1 : array1){
        for (std::string a2 : array2){
            if (a2.find(a1) != std::string::npos){
                result.push_back(a1);
                break;
            }
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}
