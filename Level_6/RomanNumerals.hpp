#include <iostream>
#include <string>

using namespace std;

int getNumber(char R){
	if ( R == 'I'){ return 1; }
	if ( R == 'V'){ return 5; }
	if ( R == 'X'){ return 10; }
	if ( R == 'L'){ return 50; }
	if ( R == 'C'){ return 100; }
	if ( R == 'D'){ return 500; }
	if ( R == 'M'){ return 1000; }
	return 0;
}


/*
Solution number 2
More elegant
*/
int solution(string str){
	int ret = 0;
	for(int i = 0; i < str.size(); i++){
		if(
			i < str.size() - 1
			&& getNumber(str[i]) < getNumber(str[i + 1])
		){
			ret -= getNumber(str[i]);
		}else{
			ret += getNumber(str[i]);
		}
	}
	return ret;
}

/*
Solution number 1
Not very elegant
*/

/*
We sum all substraction and return the values 
Such that if we have MMIVIV
We return (V - I) + (V - I)
And remove these characters from the string 
Then the string turn into MM
*/
// int removeSubstractions(string& roman){
// 	int sum = 0;
// 	string ret = "";
// 	for (int i = 0; i < roman.size();i++){
// 		/*Last character we add anyway*/
// 		if(i <  roman.size() - 1){
// 			if( getNumber(roman[i]) < getNumber(roman[i + 1]) ){
// 				sum +=  getNumber(roman[i + 1]) - getNumber(roman[i]);
// 				i++;
// 			}else{
// 				ret += roman[i];
// 			}
// 		}else{
// 			ret += roman[i];
// 		}
// 	}
// 	roman = ret;
// 	return sum;
// }

// int solution(string roman) {
// 	cout << endl << endl;
// 	int sum = removeSubstractions(roman);
// 	for (int i = 0; i < roman.size();i++){
// 		sum +=  getNumber(roman[i]);
// 	}
// 	return sum;
// }

int ROMsolution(string roman){
    return solution(roman);
}