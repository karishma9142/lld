class Vehicle {
private:
    DriveStatergy* driveStrategy;

public:
    Vehicle(DriveStrategy* strategy) {
        this->driveStrategy = strategy;
    }

    void drive() {
        driveStrategy->drive();
    }
};