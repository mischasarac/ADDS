class Engine {
public:
    virtual void start() = 0;
};

class PetrolEngine : public Engine {
public:
    void start() override {}
};

class ElectricEngine : public Engine {
public:
    void start() override {}
};

class Car {
private:
    Engine* engine;
public:
    Car(Engine* eng) : engine(eng) {}
    void startEngine() {
        engine->start();
    }
};
