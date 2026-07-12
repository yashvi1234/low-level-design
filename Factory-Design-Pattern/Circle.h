#include "Shape.h"
#include <iostream>
using namespace std;

class Circle : public Shape {
    void draw() override {
        cout<< "Drawing Circle"<<endl;
    }
};