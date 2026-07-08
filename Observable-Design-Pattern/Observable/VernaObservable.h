#include "ObservableInterface.h"
#include <vector>
#include <iostream>
using namespace std;

class VernaObservable: public ObservableInterface {
    vector<ObserverInterface*> observers;
    int stock = 0;

    void add(ObserverInterface* obj) override {
        this->observers.push_back(obj);
    }

    void remove(ObserverInterface* obj) override{
        auto pos = find(observers.begin(), observers.end(), obj);
        if(pos != observers.end()) observers.erase(pos);
    }

    void notify() override{
        for(unsigned long i=0; i<observers.size(); ++i){
            observers[i]->update();
        }
    }

    void setData(int data) override {
        if(stock == 0){
            stock+= data; // code is running sync, so need to update stock first then notify
            this->notify();

        } else {
        stock+= data;
        }
    }

    pair<int, string> getData() override {
        return {stock, "Verna Car"};
    }
};