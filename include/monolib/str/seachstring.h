/*
created 8/31/2017
https://stackoverflow.com/questions/14265581/parse-split-a-string-in-c-using-string-delimiter-standard-c
https://stackoverflow.com/questions/5607589/right-way-to-split-an-stdstring-into-a-vectorstring
*/
#ifndef SEARCHSTRING
#define SEARCHSTRING 1

#include "token.h"

#include <algorithm>
#include <string>
#include <vector>

std::vector<Token> strToTokens(std::string str, std::string split);

std::vector<std::string> strToStrings(std::string str, std::string split);

#endif