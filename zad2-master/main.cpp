#include <iostream>
#include <thread>
#include "Stats.h"
#include "OperationTracker.h"

void doSomething(Stats& stats) {
    OperationTracker tracker(stats, "something");
    std::this_thread::sleep_for(std::chrono::seconds(1));
}

void doSomethingButLonger(Stats& stats) {
    OperationTracker tracker(stats, "something longer");
    std::this_thread::sleep_for(std::chrono::seconds(2));
}

int main() {
    Stats stats;
    for (auto i = 0; i < 10; ++i) {
        doSomething(stats);
    }

    for (auto i = 0; i < 10; ++i) {
        doSomethingButLonger(stats);
    }

    std::cout << stats << std::endl;

    return 0;
}