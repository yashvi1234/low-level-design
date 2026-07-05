#include "DriveStrategy.h"
#include <iostream>
using namespace std;


class NormalDriveStrategy : public DriveStrategy {
    void drive() override {
        cout<<"Normal Drive Strategy"<<endl;
    }
};