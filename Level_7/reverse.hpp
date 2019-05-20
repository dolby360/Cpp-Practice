#ifndef REV_H
#define REV_H

#include "../stdafx.h"
using namespace std;

class rev{
public:
	std::string reverse_letter(const std::string &str);
};


string rev::reverse_letter(const string &str) {
	string newStr = "";
	char l = 'a';
	for (int i = str.size(); i >= 0; i--) {
		l = str[i];
		if ((l >= 'a' && l <= 'z') || (l >= 'A' && l <= 'Z')) {
			newStr += str[i];
		}
	}	
	return newStr;
}

#endif //PCH_H
