#include "Stats.h"
#include <ostream>

void Stats::add(std::string type, Operation operation)
{
	int tmp = -1;
	for (size_t i = 0; i < Types.size; i++)
	{
		if (Types[i] == type)
		{
			int tmp = i;
			break;
		}
	}
	if (tmp = -1) {
		Types.emplace_back(type);
		tmp = Types.size - 1;
	}
	Types.emplace_back(type);
	Operations.emplace(operation,tmp);
}

std::ostream &operator<<(std::ostream &stream, const Stats &stats) {
	for (size_t i = 0; i < stats.Types.size; i++)
	{
		stream <<"+"<< stats.Types[i]<<":\n";
		for (auto it = stats.Operations.begin(); it != stats.Operations.end(); ++it)
		{
			if (it->second == i)
				stream <<" -"<< it->first.getDuration().count() << std::endl;
		}
		stream << std::endl;
	}
	return stream;
}
