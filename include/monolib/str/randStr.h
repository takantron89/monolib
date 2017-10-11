#ifndef RANDOMSTRGEN
#define RANDOMSTRGEN

#include "../rand/randomGen.h"

#include <vector>
#include <string>

enum RandomStrType {
	ALPHA, ALPHANUMERIC, ALL_ANSI
};

std::string genRandomStr(const int length);

std::string genRandomStr(const int length, RandomStrType type);

std::string genRandomStr(const int length, std::vector<std::pair<int, int>> ranges);

//NOTE is not even CLOSE to being done;
std::wstring genRandomStrUTF(const int length);

#endif