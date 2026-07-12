#include "BasePizza.h"

class MargritaPizza : public BasePizza {
    int cost() override {
        return 150;
    }
};