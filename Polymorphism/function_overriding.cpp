# include <iostream> 

using namespace std;

// Run time polymorphism
// function overriding
class Perent {
public:
    void print() {
        cout << "Parent class" << endl;
    }
};

class Child : public Perent {
public:
    void print() {
        cout << "Child class" << endl;
    }
};

int main() {
    Perent p;
    p.print(); // Calls Parent class print()
    
    Child c;
    c.print(); // Calls Child class print()
    return 0;
}