#pragma once
#include "Car.hpp"
#include "PetrolEngine.hpp"

class PetrolCar : public virtual Car {
public:
    PetrolCar(PetrolEngine* engine);
    ~PetrolCar();
    PetrolEngine* getEngine() { return engine_; }
    void setEngine(PetrolEngine* engine) {
        delete engine_;
        engine_ = engine;
    }
    void refill() override;

protected:
    void refuel();
    PetrolEngine* engine_;
};
