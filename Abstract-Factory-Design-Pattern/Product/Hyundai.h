#include "Car.h"
#include <iostream>
using namespace std;

class Hyundai : public Car {
    void average() override {
        cout<<"Hyundai Car Average is 20km/l"<<endl;
    }
};