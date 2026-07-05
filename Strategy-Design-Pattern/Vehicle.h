#include "DriveStrategy.h"
#include <memory>
using namespace std;

class Vehicle {
    unique_ptr<DriveStrategy> obj;

    public:
    Vehicle(unique_ptr<DriveStrategy> obj){
        this->obj = std::move(obj);
    }

    void drive(){
        obj->drive();
    }
};