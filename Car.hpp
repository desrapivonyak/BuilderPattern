#pragma once
#include <string>

class Car {
public:
    void setSeats(int seats);
    void setEngine(const std::string& engine);
    void printDetails() const;
private:
    int seats_;
    std::string engine_;
};
