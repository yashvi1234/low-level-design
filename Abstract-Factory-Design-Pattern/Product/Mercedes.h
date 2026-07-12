#include "Car.h"
#include <iostream>
using namespace std;

class Mercedes : public Car {
    void average() override {
        cout<<"Mercedes Car Average is 70km/l"<<endl;
    }
};