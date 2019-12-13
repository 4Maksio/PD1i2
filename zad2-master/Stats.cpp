#include "Stats.h"
#include <ostream>

void Stats::add(std::string type, Operation operation)
{
	Operations[type].push_back(operation);
}

std::ostream &operator<<(std::ostream &stream, const Stats &stats) {
	for (auto item : stats.Operations)
	{
		stream <<"+"<< item.first <<":\n";
		for (auto it : item.second)
		{
				stream <<" " << it.getDuration().count();
		}
		stream << std::endl;
	}
	return stream;
}
