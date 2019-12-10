#ifndef ZAD2_STATS_H
#define ZAD2_STATS_H

#include <map>
#include "Operation.h"

class Stats {
public:
	void add(std::string type, Operation operation);

private:
	std::map<std::string, Operation> Collection;
	friend std::ostream& operator << (std::ostream& stream, const Stats& stats);
};


#endif //ZAD2_STATS_H
