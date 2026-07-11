#include "Extracheese.h"
#include "MushroomToppings.h"
#include "MargritaBasePizza.h"
#include "FarmhousePizza.h"
#include <memory>
#include <iostream>
using namespace std;

int main() {
    unique_ptr<BasePizza> margrita = make_unique<MargritaPizza>();
    unique_ptr<BasePizza> farmhouse = make_unique<FarmhousePizza>();

    unique_ptr<BasePizza> margaritaExtraCheese = make_unique<ExtraCheese>(margrita.get());
    unique_ptr<BasePizza> farmhouseMushroomPizza = make_unique<MushroomToppings>(farmhouse.get());
    unique_ptr<BasePizza> margaritaExtraCheeseAndMushroomPizza = make_unique<MushroomToppings>(margaritaExtraCheese.get());

    cout<< "Cost of Margrita Pizza with Extra Cheese: " << margaritaExtraCheese->cost() << endl;
    cout<< "Cost of Farmhouse Pizza with Mushroom Toppings: " << farmhouseMushroomPizza->cost() << endl;
    cout<< "Cost of Margrita Pizza with Extra Cheese and Mushroom Toppings: " << margaritaExtraCheeseAndMushroomPizza->cost() << endl;
    return 0;
}