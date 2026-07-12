#include "Factory2/CarFactoryFactory.h"

int main() {
    unique_ptr<CarFactoryFactory> carFactoryFactory = make_unique<CarFactoryFactory>();
    unique_ptr<CarFactory> ordinaryCarFactory = carFactoryFactory->getCarFactory("Ordinary");
    unique_ptr<CarFactory> luxuryCarFactory = carFactoryFactory->getCarFactory("Luxury");

    unique_ptr<Car> punchCar = ordinaryCarFactory->getCar("Punch");
    unique_ptr<Car> hyundaiCar = ordinaryCarFactory->getCar("Hyundai");
    unique_ptr<Car> bmwCar = luxuryCarFactory->getCar("BMW");
    unique_ptr<Car> mercedesCar = luxuryCarFactory->getCar("Mercedes");

    punchCar->average();
    hyundaiCar->average();
    bmwCar->average(); 
    mercedesCar->average();
    return 0;
}