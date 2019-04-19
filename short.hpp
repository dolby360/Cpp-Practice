#ifndef __ROTATE__
#define __ROTATE__

#include "stdafx.h"
#include "util.hpp"
/*
Simple, given a string of words, return the length of the shortest word(s).

String will never be empty and you do not need to account for different data types.
*/
class Short
{
public:
	int find_short(std::string str);
	bool find_shortTest();
};

int Short::find_short(std::string str) {
	//find split function in util
	vector<string> ret = split(str,' ');
	int min = ret[0].size();
	for(int i = 0; i < ret.size(); i++){
		if(ret[i].size() < min){
			min = ret[i].size();
		}
	}
	return min;
}

bool Short::find_shortTest(){
	int ans = this->find_short("bitcoin take over the world maybe who knows perhaps");
	if (ans == 3) {
		cout << "YAY" << endl;
		return true;
	}
	else {
		cout << ":(" << endl;
		return false;
	}
}

#endif