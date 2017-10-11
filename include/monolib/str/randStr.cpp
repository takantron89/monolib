#include "randStr.h"
/*
http://www.unicode.org/charts/PDF/U0000.pdf
http://www.binaryhexconverter.com/hex-to-decimal-converter

*/

std::string genRandomStr(const int length, RandomStrType type) {
	
	std::vector<char> buff;
	buff.reserve(length);
	switch(type) {
		case ALL_ANSI:
			
			for (int i = 0; i <= length; i++) {
				buff.push_back((char)randomGen(33, 126));
			}
			
			break; //ALL_ANSI
		
		case ALPHA:
			
			for(int i = 0; i < length; i++) {
				buff.push_back((char)randomGen({{65, 90}, {97, 122}}));
			}
			
			break; //ALPHA
			
			case ALPHANUMERIC:
				for(int i = 0; i < length; i++) {
					buff.push_back((char)randomGen({{48, 57}, {65, 90}, {97, 122}} )); // 0-9, A-Z, a-z
				}
				
				break; //ALPHANUMERIC
	}
	std::string out(buff.begin(), buff.end());
	return out;
}

std::string genRandomStr(const int length) {
	return genRandomStr(length, ALL_ANSI);
}

std::string genRandomStr(const int length, std::vector<std::pair<int, int>> ranges) {
	std::vector<char> buff;
	buff.reserve(length);
	for(int i = 0; i < length; i++) {
		buff.push_back((char)randomGen(ranges));
	}
	
	std::string out(buff.begin(), buff.end());
	return out;
}

//wstring stuff

std::wstring genRandomStrUTF(const int length) {
	std::wstring out = L"";
	for(int i = 0; i < length; i++) {
		out += (wchar_t)randomGen(33, 126);
	}
	
	return out;
}