#include <iostream>
using namespace std;

class NormalDriveStatergy : public DriveStatergy {
    public :
    void Drive () override {
        cout<<"normal dive statergy"
    }
};