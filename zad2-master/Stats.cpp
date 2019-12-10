#include "Stats.h"
#include <ostream>

void Stats::add(std::string type, Operation operation)
{
	Collection.emplace(type, operation);
}

std::ostream &operator<<(std::ostream &stream, const Stats &stats) {
	for(auto item : stats.Collection)
	{
		//do something
	}
	return stream;
}
