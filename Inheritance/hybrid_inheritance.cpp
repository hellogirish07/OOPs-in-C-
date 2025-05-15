#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    void displayShape() {
        cout << "This is a shape." << endl;
    }
};

// Derived class 1
class Triangle : public virtual Shape {
public:
    double base, height;

    void setTriangle(double b, double h) {
        base = b;
        height = h;
    }

    double triangleArea() {
        return 0.5 * base * height;
    }
};

// Derived class 2
class Rectangle : public virtual Shape {
public:
    double length, breadth;

    void setRectangle(double l, double b) {
        length = l;
        breadth = b;
    }

    double rectangleArea() {
        return length * breadth;
    }
};

// Derived class from both Triangle and Rectangle
class Area : public Triangle, public Rectangle {
public:
    void showAreas() {
        cout << "Triangle Area: " << triangleArea() << endl;
        cout << "Rectangle Area: " << rectangleArea() << endl;
    }
};

int main() {
    Area a;
    a.displayShape();  // from Shape
    a.setTriangle(10, 5);
    a.setRectangle(8, 4);
    a.showAreas();

    return 0;
}
