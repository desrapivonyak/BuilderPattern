#pragma once
#include "Builder.hpp"
#include "Car.hpp"
#include <string>

class CarBuilder : public Builder {
public:
    CarBuilder();
    void reset() override;
    void setSeats(int) override;
    void setEngine(const std::string&) override;
    Car* getProduct();
private:
    Car* car_;
};