#ifndef ZAD2_OPERATION_H
#define ZAD2_OPERATION_H


#include <string>
#include <chrono>

class Operation {
public:
    void start();
    void stop();

    std::chrono::microseconds getDuration() const;
};


#endif //ZAD2_OPERATION_H
