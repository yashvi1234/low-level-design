#include "ShapeFactory.h"

int main() {
    unique_ptr<ShapeFactory> shapeFac = make_unique<ShapeFactory>();

    unique_ptr<Shape> circle = shapeFac->getShapeObject("CIRCLE");
    unique_ptr<Shape> square = shapeFac->getShapeObject("SQUARE");

    circle->draw();
    square->draw();
    return 0;
}