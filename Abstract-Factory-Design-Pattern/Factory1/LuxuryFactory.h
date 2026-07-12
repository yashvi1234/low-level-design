#include "CarFactory.h"
#include "../Product/BMW.h"
#include "../Product/Mercedes.h"

class LuxuryFactory : public CarFactory {
    public:
    unique_ptr<Car> getCar(string carType) override {
        if(carType == "BMW") {
            return make_unique<BMW>();
        } else if(carType == "Mercedes") {
            return make_unique<Mercedes>();
        } else {
            return nullptr;
        }
    }
};