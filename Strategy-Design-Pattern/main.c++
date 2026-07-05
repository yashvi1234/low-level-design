#include <memory>
#include "NormalDriveStrategy.h"
#include "SportsDriveStrategy.h"
#include "Vehicle.h"
using namespace std;
//use unique_ptr through out for strategy design pattern to avoid memory leaks and dangling pointers

int main() {
    Vehicle punch(make_unique<NormalDriveStrategy>());
    punch.drive();

    Vehicle bmw(make_unique<SportsDriveStrategy>());
    bmw.drive();

    return 0;
}