#include "Shape.h"
#include <iostream>
using namespace std;

class Square : public Shape {
    void draw() override {
        cout<< "Drawing Square"<<endl;
    }
};