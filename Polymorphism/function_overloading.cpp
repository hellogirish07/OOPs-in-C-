# include <iostream> 

using namespace std;

// Function Overloading
// Compile time polymorphism
class Print {
public:
    void show(int i) {
        cout << "Integer: " << i << endl;
    }

    // Function Overloading
    void show(char ch) {
        cout << "Charactor: " << ch << endl;
    }
};

int main() {
    Print p;
    p.show(5); // Calls show(int)
    p.show('A'); // Calls show(char)
    return 0;
}