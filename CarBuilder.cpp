#include "CarBuilder.hpp"
#include "Car.hpp"

CarBuilder::CarBuilder() {
  reset();
}

void CarBuilder::reset(){
  car_ = new Car();
}

void CarBuilder::setSeats(int seats) {
  car_->setSeats(seats);
}

void CarBuilder::setEngine(const std::string& engine) {
  car_->setEngine(engine);
}

Car* CarBuilder::getProduct() {
  Car* product = car_;
  car_ = nullptr;
  return product;
}