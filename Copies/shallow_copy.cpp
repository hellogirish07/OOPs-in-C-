#include <iostream>
using namespace std;

class Student {
public:
    string name;
    double cgpa;

    Student(string name, double cgpa) {
        this->name = name;
        this->cgpa = cgpa;
    }

    void getInfo() const {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {
    Student s1("Girish Suthar", 9.5);
    cout << "Original Student (Shallow Copy):" << endl;
    s1.getInfo();

    cout << "\nShallow Copy Constructor Called:" << endl;
    Student s2 = s1;  // Default shallow copy
    s2.getInfo();

    // Modify original to show shallow copy behavior
    s1.name = "Modified Name";
    s1.cgpa = 8.0;

    cout << "\nAfter modifying original object:" << endl;
    cout << "Original:" << endl;
    s1.getInfo();
    cout << "Copy:" << endl;
    s2.getInfo();

    return 0;
}
