#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Due to the pure virtual function, this class cannot be instantiated
    // and is considered an abstract class.
    virtual void draw() = 0; // Pure virtual function
};

// Derived class - Circle
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle." << endl;
    }
};

// Derived class - Rectangle
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle." << endl;
    }
};

int main() {
    Circle c;
    Rectangle r;

    c.draw();  // Output: Drawing a Circle.
    r.draw();  // Output: Drawing a Rectangle.

    return 0;
}
