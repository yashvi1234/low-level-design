#pragma once

class DriveStrategy {
    public:
    virtual void drive() = 0;
    virtual ~DriveStrategy() = default;
};