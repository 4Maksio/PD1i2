#ifndef ZAD2_STATS_H
#define ZAD2_STATS_H

#include <vector>
#include <map>
#include "Operation.h"

class Stats {
public:
	void add(std::string type, Operation operation);

private:
	std::map<std::string, std::vector<Operation>> Operations;
	friend std::ostream& operator << (std::ostream& stream, const Stats& stats);
};


#endif //ZAD2_STATS_H
