class Car : public Vehicle {
public:
    void drive() override {
        cout << "Driving a Car 🚗" << endl;
    }
};

class Bike : public Vehicle {
public:
    void drive() override {
        cout << "Riding a Bike 🏍️" << endl;
    }
};

class Truck : public Vehicle {
public:
    void drive() override {
        cout << "Driving a Truck 🚚" << endl;
    }
};