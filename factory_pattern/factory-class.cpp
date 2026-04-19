class VehicleFactory {
public:
    static Vehicle* createVehicle(string type) {
        if (type == "car") return new Car();
        else if (type == "bike") return new Bike();
        else if (type == "truck") return new Truck();
        else return nullptr;
    }
};