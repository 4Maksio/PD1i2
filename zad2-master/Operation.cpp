#include "Operation.h"

void Operation::start()
{
	atStart = std::chrono::high_resolution_clock::now();
}

void Operation::stop()
{
	atStop = std::chrono::high_resolution_clock::now();
}

std::chrono::microseconds Operation::getDuration() const{
	std::chrono::duration< double > fs = atStop - atStart;
	std::chrono::microseconds tmp = std::chrono::duration_cast<std::chrono::milliseconds>(fs);
	return tmp;
}