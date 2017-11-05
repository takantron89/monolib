#include "searchstring.h"

std::vector<std::string> strToStrings(std::string str, std::string split) {
	std::vector<std::string> out;
	size_t last = 0;
    size_t next = 0;

    while((next = str.find(split, last)) != std::string::npos) {
        out.push_back(str.substr(last, next-last));
        last = next + 1;
    }
    
    out.push_back(str.substr(last));

	return out;
}


