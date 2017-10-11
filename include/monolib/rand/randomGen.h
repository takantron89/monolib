#ifndef RANDOMGEN
#define RANDOMGEN

#include <chrono>
#include <cstdlib>
#include <vector>

void seed();

int randomGen(int max);

int randomGen(int min, int max);

int randomGen(const std::vector<std::pair<int, int>> ranges);

#endif