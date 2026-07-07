#pragma once

class ObserverInterface {
    public:
    virtual void update() = 0;

    virtual ~ObserverInterface() = default;
};