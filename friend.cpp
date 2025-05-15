#include <iostream>
using namespace std;

// Forward declarations
class ClassB;

class ClassD {
public:
    void accessClassB(ClassB&); // Declaration of member function
};

class ClassA {
private:
    int valueA;

public:
    ClassA(int val) : valueA(val) {}

    friend void showValues(ClassA, ClassB);  // Friend function
    friend class ClassC;                     // Friend class
};

class ClassB {
private:
    int valueB;

public:
    ClassB(int val) : valueB(val) {}

    friend void showValues(ClassA, ClassB);      // Friend function
    friend void ClassD::accessClassB(ClassB&);    // Member function of ClassD
};

// Friend function of both ClassA and ClassB
void showValues(ClassA a, ClassB b) {
    cout << "Friend Function accessing private members:\n";
    cout << "ClassA's value: " << a.valueA << endl;
    cout << "ClassB's value: " << b.valueB << endl;
}

// Friend class of ClassA
class ClassC {
public:
    void display(ClassA& a) {
        cout << "Friend Class accessing ClassA's private value: " << a.valueA << endl;
    }
};

// Member function definition after all classes are known
void ClassD::accessClassB(ClassB& b) {
    cout << "ClassD's member function accessing ClassB's private value: " << b.valueB << endl;
}

int main() {
    ClassA objA(10);
    ClassB objB(20);
    ClassC objC;
    ClassD objD;

    showValues(objA, objB);          // Friend function
    objC.display(objA);              // Friend class
    objD.accessClassB(objB);         // Member function as friend

    return 0;
}
