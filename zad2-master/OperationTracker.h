#ifndef ZAD2_OPERATIONTRACKER_H
#define ZAD2_OPERATIONTRACKER_H

#include "Operation.h"
#include "Stats.h"

class OperationTracker {
public:
    Stats& stats;
    std::string type;
    Operation operation;

    OperationTracker(Stats& stats, std::string type);
    ~OperationTracker();
};


#endif //ZAD2_OPERATIONTRACKER_H
