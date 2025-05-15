# include <iostream> 

using namespace std;

// Compile time polymorphism
class Demo {
public:
    // Operator Overloading
    int x = 10;
    int y = x;

    void print() {
        cout << "Operator Overloading" << endl;
        cout << "x: " << x << endl;
        cout << "y: " << y << endl;
    }
};

int main() {
    Demo d;
    d.print(); // Calls print()
    return 0;
}