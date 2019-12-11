#include "OperationTracker.h"

OperationTracker::OperationTracker(Stats& stats, std::string type) :stats(stats) {
	this->type = type;
	operation.start();
}

OperationTracker::~OperationTracker()
{
	operation.stop();
	stats.add(type, operation);
}