#include "ToppingsDecorator.h"

class MushroomToppings : public ToppingsDecorator {
    BasePizza* base;

    public:
    MushroomToppings(BasePizza* base) : base(base) {}

    int cost() override {
        return base->cost() + 20;
    }
};