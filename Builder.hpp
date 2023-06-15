#pragma once
#include <iostream>
#include <string>

class Builder {
public:
    virtual void reset() = 0;
    virtual void setSeats(int) = 0;
    virtual void setEngine(const std::string&) = 0;
    virtual ~Builder() {}
};