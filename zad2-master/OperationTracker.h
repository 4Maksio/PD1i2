#ifndef ZAD2_OPERATIONTRACKER_H
#define ZAD2_OPERATIONTRACKER_H

#include "Operation.h"
#include "Stats.h"

class OperationTracker {
public:
    OperationTracker(Stats& stats, std::string type);
    ~OperationTracker();

    Stats& stats;
    std::string type;
    Operation operation;
};


#endif //ZAD2_OPERATIONTRACKER_H
