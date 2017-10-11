#include "randomGen.h"

void seed() {
 srand(std::time(0));
}

int randomGen(int max) {
	
	return rand() % max;
}

int randomGen(int min, int max) {
	int diff = (max-min)+1;
	return rand() % diff + min;
}

int randomGen(const std::vector<std::pair<int, int>> ranges) {
	std::vector<int> pick;
	pick.reserve(ranges.size());
	for(auto &it : ranges) {
		//probably will be optimized in the future
		pick.push_back(randomGen(it.first, it.second));
	}
	//int out = pick[randomGen(0)]
	return pick[randomGen(ranges.size())];
}
