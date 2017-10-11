#ifndef READ_DUMP
#define READ_DUMP

#include <fstream>
#include <string>
#include <vector>

/*
 * WARNING
 * these functions are probably not the most efficient and could use more polishing
 * */
//internal funtion
std::vector<char> strToChar(std::string str);

std::vector<char> loadFromFile(std::string path);

void writeToFile(std::string path, std::vector<char> write);

void writeToFile(std::string path, std::string write);

#endif
