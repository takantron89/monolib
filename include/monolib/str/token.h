#ifndef TOKENH
#define TOKENH 1

#define DEFAULTTOKENVAL 0

#if __cplusplus  <= 199711L
	#error C++11 or higher needed for compilation
#endif

#include <string>

class Token {
public:
	std::string str;
	double valid;
	Token();
	Token(std::string s);
	Token(std::string s, double n);
};

#endif
