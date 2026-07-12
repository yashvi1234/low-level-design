#pragma once
#include "../Product/Car.h"
#include <memory>
#include <string>
using namespace std;

class CarFactory {
    public:
    virtual unique_ptr<Car> getCar(string carType) = 0;
    virtual ~CarFactory() = default;
};