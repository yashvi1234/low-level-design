#include "BasePizza.h"

class FarmhousePizza : public BasePizza {
    int cost() override {
        return 170;
    }
};