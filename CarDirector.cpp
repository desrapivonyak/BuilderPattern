#include "CarDirector.hpp"

void Director::constructSportsCar(Builder* builder) {
  builder->reset();
  builder->setSeats(2);
  builder->setEngine("Sport Engine");
}
