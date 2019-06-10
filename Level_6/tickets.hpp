
#include <string>
#include <vector>
#include <iostream>

std::string tickets(const std::vector<int> peopleInLine){
    int calc_25 = 0;
    int calc_50 = 0;
    std::vector<int> temp = peopleInLine;
    for(auto it = temp.begin(); it != temp.end(); it++){
        switch(*it){
            case 100:
                if(calc_50 && calc_25){
                    calc_50--;
                    calc_25--;
                }else if(calc_25 >= 3){
                    calc_25 -= 3;
                }else{
                    return "NO";
                }
            break;
            case 50:
                if(calc_25){
                    calc_25--;
                    calc_50++;
                }else{
                    return "NO";
                }
            break;
            case 25:
                calc_25++;
            break;
        }
    }
    return "YES" ;
}