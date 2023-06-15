#include "Car.hpp"
#include <iostream>

void Car::setSeats(int seats) {
        seats_ = seats;
    }

void Car::setEngine(const std::string& engine) {
        engine_ = engine;
    }

void Car::printDetails() const {
  std::cout << "Car Details:" << std::endl;
  std::cout << "Seats: " << seats_ << std::endl;
  std::cout << "Engine: " << engine_ << std::endl;
}
