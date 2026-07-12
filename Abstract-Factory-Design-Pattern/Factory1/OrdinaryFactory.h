#include "CarFactory.h"
#include "../Product/Punch.h"
#include "../Product/Hyundai.h"


class OrdinaryFactory : public CarFactory {
    public:
    unique_ptr<Car> getCar(string carType) override {
        if(carType == "Punch") {
            return make_unique<Punch>();
        } else if(carType == "Hyundai") {
            return make_unique<Hyundai>();
        } else {
            return nullptr;
        }
    }
};