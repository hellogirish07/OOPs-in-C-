#include <iostream>
using namespace std;

class Student {
public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa) {
        this->name = name;
        cgpaPtr = new double(cgpa);
    }

    // Deep Copy Constructor
    Student(const Student& obj) {
        name = obj.name;
        cgpaPtr = new double(*(obj.cgpaPtr));  // Deep copy
    }

    ~Student() {
        delete cgpaPtr;
    }

    void getInfo() const {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << *cgpaPtr << endl;
    }
};

int main() {
    Student s1("Girish Suthar", 9.5);
    cout << "Original Student (Deep Copy):" << endl;
    s1.getInfo();

    cout << "\nDeep Copy Constructor Called:" << endl;
    Student s2 = s1;  // Calls deep copy constructor
    s2.getInfo();

    // Modify original to show deep copy behavior
    *(s1.cgpaPtr) = 8.0;

    cout << "\nAfter modifying original object's CGPA:" << endl;
    cout << "Original:" << endl;
    s1.getInfo();
    cout << "Copy:" << endl;
    s2.getInfo();

    return 0;
}
