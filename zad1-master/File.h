#ifndef UPPER_FILE_H
#define UPPER_FILE_H
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

class RAII {
private:
	std::fstream file;
public:
	RAII(const std::string& path, const std::string& mode);
	std::string read();
	void write(std::string text);
	~RAII();
};

#endif //UPPER_FILE_H
