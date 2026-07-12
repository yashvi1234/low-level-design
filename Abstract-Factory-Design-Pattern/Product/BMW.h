#include "Car.h"
#include <iostream>
using namespace std;

class BMW : public Car {
    void average() override {
        cout<<"BMW Car Average is 50km/l"<<endl;
    }
};