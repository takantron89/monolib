#include "token.h"

Token::Token() {
	str = nullptr;
	valid = DEFAULTTOKENVAL;
}

Token::Token(std::string s, double n) {
	str = s;
	valid = n;
}

