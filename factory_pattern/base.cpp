#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void drive() = 0;  // pure virtual
    virtual ~Vehicle() {}
};