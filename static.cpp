#include <iostream>
using namespace std;

class Demo {
public:
    // Static member variable (shared by all objects)
    static int staticCounter;

    // Instance member variable (unique to each object)
    int id;

    // Constructor
    Demo(int i) {
        id = i;
        staticCounter++;
        cout << "Constructor called for object with ID: " << id << endl;
    }

    // Static member function
    static void showStaticCount() {
        cout << "Static count (number of objects created): " << staticCounter << endl;
    }

    // Function to demonstrate static local variable
    void staticLocalDemo() {
        static int count = 0; // Retains value between calls
        count++;
        cout << "Static local count for ID " << id << ": " << count << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor called for object with ID: " << id << endl;
    }
};

// Initialize static member variable
int Demo::staticCounter = 0;

// Static object outside main (lives from program start to end)
static Demo staticObjOutside(0);

int main() {
    cout << "Inside main function\n";

    Demo d1(1); // Constructor called
    Demo d2(2); // Constructor called

    d1.staticLocalDemo();
    d1.staticLocalDemo();

    d2.staticLocalDemo();

    Demo::showStaticCount(); // Accessing static member function

    // Static object inside a block (destroyed at end of program, not block)
    {
        static Demo staticObjInside(99);
        staticObjInside.staticLocalDemo();
    }

    cout << "Exiting main function\n";
    return 0;
}
