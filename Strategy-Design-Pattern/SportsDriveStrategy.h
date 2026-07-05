#include "DriveStrategy.h"
#include <iostream>
using namespace std;


class SportsDriveStrategy : public DriveStrategy {
    void drive() override {
        cout<<"Sports Drive Strategy"<<endl;
    }
};