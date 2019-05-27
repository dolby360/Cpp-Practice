#include "../stdafx.h"
#include "../util.hpp"

using namespace std;

class MaxRotate
{
public:
  static long long maxRot(long long n);
};

long long MaxRotate::maxRot(long long n)
{
  std::string str = std::to_string(n);
  long long mx = n;
  for (unsigned int i = 0; i < str.length() - 1; ++i)
  {
    str = str.substr(0, i) + str.substr(i + 1, str.length() - (i + 1)) + str[i];
    mx = std::stoll(str) > mx ? std::stoll(str) : mx;
  }
  return mx;
}

void test(){
    long long res = 0;
    res = MaxRotate::maxRot(896219342);
    if(res == 962193428){
        cout << res << " = :)" << endl;
    }else{
        cout << res << " = :(" << endl;
    }
}