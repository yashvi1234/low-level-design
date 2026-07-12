#include "ToppingsDecorator.h"

class ExtraCheese : public ToppingsDecorator {
    BasePizza* base;

    public:
    ExtraCheese(BasePizza* base) : base(base) {}

    int cost() override  {
        return base->cost() + 10;
    }
};