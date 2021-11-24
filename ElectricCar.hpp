#pragma once
#include "Car.hpp"
#include "ElectricEngine.hpp"

class ElectricCar : public virtual Car {
public:
    ElectricCar(ElectricEngine* engine);
    ~ElectricCar();
    ElectricEngine* getEngine() { return engine_; }
    void setEngine(ElectricEngine* engine) {
        delete engine_;
        engine_ = engine;
    }
    void refill() override;

protected:
    void charge();
    ElectricEngine* engine_;
};
