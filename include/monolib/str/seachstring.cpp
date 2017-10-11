#include "seachstring.h"
/*
std::vector<Token> strToTokens(std::string str, std::string split) {

	return out;
}*/

std::vector<std::string> strToStrings(std::string str, std::string split) {
	//size_t alloc = std::count(str.begin(), str.end(), split);
	std::vector<std::string> out;
	//out.reserve(alloc);
	std::string bStr = str; // as to not break anything
	size_t pos = 0;
	while((pos = bStr.find(split)) != std::string::npos) {
		out.push_back(bStr.substr(0, pos));
		bStr.erase(0, pos+split.length());
	}
	
	return out;
}