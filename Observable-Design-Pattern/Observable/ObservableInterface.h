#pragma once
#include "../Observer/ObserverInterface.h"
#include <string>
using namespace std;

class ObservableInterface {
    public:
    virtual void add(ObserverInterface* obj) = 0;

    virtual void remove(ObserverInterface* obj) = 0;

    virtual void setData(int data) = 0;

    virtual pair<int, string> getData() = 0;

    virtual void notify() = 0;

    virtual ~ObservableInterface() = default;
};