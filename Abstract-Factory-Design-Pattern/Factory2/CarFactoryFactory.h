#include "../Factory1/OrdinaryFactory.h"
#include "../Factory1/LuxuryFactory.h"

class CarFactoryFactory {
    public:
    unique_ptr<CarFactory> getCarFactory(string factoryType) {
        if(factoryType == "Ordinary") {
            return make_unique<OrdinaryFactory>();
        } else if(factoryType == "Luxury") {
            return make_unique<LuxuryFactory>();
        } else {
            return nullptr;
        }
    }
};