#include "readdump.h"

std::vector<char> strToChar(std::string str) {
	std::vector<char> outData(str.c_str(), str.c_str() + str.length() + 1);
	return outData;
}

std::vector<char> loadFromFile(std::string path) {
    std::vector<char> out;

    std::fstream file;
    file.open(path, std::ios::binary | std::ios::in );

    char buff;

    while(file.get(buff)) {
        out.push_back(buff);
    }

    file.close();

    return out;
}

void writeToFile(std::string path, std::vector<char> write) {
    std::fstream file;
    file.open(path, std::ios::binary | std::ios::app);

    for(const auto &it: write) {
        file << it;
    }

    file.close();
}

void writeToFile(std::string path, std::string write) {
	writeToFile(path, strToChar(write));
}
