#include <iostream>
#include <string>
#include "Car.hpp"
#include "CarBuilder.hpp"
#include "CarDirector.hpp"

int main() {
    Director director;

    CarBuilder carBuilder;
    director.constructSportsCar(&carBuilder);
    Car* car = carBuilder.getProduct();
    car->printDetails();

    delete car;
  
    return 0;
}