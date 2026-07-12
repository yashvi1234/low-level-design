#include "Car.h"
#include <iostream>
using namespace std;

class Punch : public Car {
    void average() override {
        cout<<"Punch Car Average is 30km/l"<<endl;
    }
};