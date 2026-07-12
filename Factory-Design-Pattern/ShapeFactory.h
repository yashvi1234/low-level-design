#pragma once

#include <string>
#include "Circle.h"
#include "Square.h"
#include <memory>
using namespace std;

class ShapeFactory {
    public:
    unique_ptr<Shape> getShapeObject(string shape) {
        if(shape == "CIRCLE"){
            return make_unique<Circle>();
        }
        else if(shape == "SQUARE"){
            return make_unique<Square>();
        }
        else {
            return nullptr;
        }
    }
};