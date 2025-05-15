# include <iostream> 

using namespace std;

// Run time polymorphism
// function overriding
// Virtual function
class Perent {
public:
    void print() {
        cout << "Parent class" << endl;
    }

    // Virtual function
    virtual void hello() {
        cout << "Virtual from Parent class " << endl;
    }
};

class Child : public Perent {
public:
    void print() {
        cout << "Child class" << endl;
    }

    void hello() {
        cout << "Virtual from Child class " << endl;
    }
};

int main() {
    Perent p;
    p.print(); // Calls Parent class print()
    p.hello(); // Calls Parent class hello()
    
    Child c;
    c.print(); // Calls Child class print()
    c.hello(); // Calls Child class hello()
    return 0;
}