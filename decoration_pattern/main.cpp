#include <iostream>
using namespace std;

// 1. Base Interface
class Pizza {
public:
    virtual int cost() = 0;
};

// 2. Concrete Base Pizza
class Margherita : public Pizza {
public:
    int cost() override {
        return 100;
    }
};

// 3. Decorator Base Class
class ToppingDecorator : public Pizza {
protected:
    Pizza* pizza;
public:
    ToppingDecorator(Pizza* p) {
        pizza = p;
    }
};

// 4. Concrete Decorators
class Cheese : public ToppingDecorator {
public:
    Cheese(Pizza* p) : ToppingDecorator(p) {}

    int cost() override {
        return pizza->cost() + 20;
    }
};

class Mushroom : public ToppingDecorator {
public:
    Mushroom(Pizza* p) : ToppingDecorator(p) {}

    int cost() override {
        return pizza->cost() + 30;
    }
};

// 5. Main Function
int main() {
    Pizza* pizza = new Margherita();
    cout << "Base Pizza Cost: " << pizza->cost() << endl;

    pizza = new Cheese(pizza);
    cout << "After Cheese: " << pizza->cost() << endl;

    pizza = new Mushroom(pizza);
    cout << "After Mushroom: " << pizza->cost() << endl;

    return 0;
}