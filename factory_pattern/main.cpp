int main() {
    Vehicle* v1 = VehicleFactory::createVehicle("car");
    Vehicle* v2 = VehicleFactory::createVehicle("bike");

    if (v1) v1->drive();
    if (v2) v2->drive();

    delete v1;
    delete v2;
    return 0;
}