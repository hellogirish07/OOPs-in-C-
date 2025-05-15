# include <iostream> 

using namespace std;

// Constructor Overloading
// Compile time polymorphism
class Teacher {
public:
    string name;
    string subject;
    string department;

    // Default Constructor
    Teacher() {
        cout << "Default constructor called" << endl;
    }

    // Constructor Overloading
    Teacher(string n, string d, string s) {
        cout << "Constructor overloaded" << endl;
        cout << "Parameterized constructor called" << endl;
        name = n;
        department = d;
        subject = s;
    }

    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Teacher t1("Girish Suthar", "CSE", "C++ Programming"); // Parameterized constructor called
    t1.getInfo(); 
    return 0;
}