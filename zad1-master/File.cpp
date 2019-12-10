#include "File.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

RAII::RAII(const std::string& path, const std::string& mode)
{
	if(mode=="w")
		file.open(path, std::ios::out);
	else
		file.open(path, std::ios::in);
}
std::string RAII::read() {
	if (!file.good())
		return "File doesn't exist.";
	else {
		std::string ret = "",line;
		while (std::getline(file, line))
		{
			ret += line;
		}
		return ret;
	}
}
void RAII::write(std::string text)
{
	file << text;
}
RAII::~RAII()
{
	file.close();
};
