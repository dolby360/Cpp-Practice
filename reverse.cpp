#include "stdafx.h"
#include "reverse.h"

using namespace std;
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