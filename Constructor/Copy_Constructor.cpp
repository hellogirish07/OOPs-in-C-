#include <iostream> 

using namespace std;

class Teacher {
public:
    string name;
    string subject;
    string department;  

    // Parameterized constructor
    Teacher(string n, string s, string d) {
        name = n;
        subject = s;
        department = d;
        cout << "Parameterized constructor called" << endl;
    }
    
    // Copy constructor
    Teacher(const Teacher &t) {
        name = t.name;
        subject = t.subject;
        department = t.department;
        cout << "Copy constructor called" << endl;
    }

    // Method to display teacher details
    void display() {
        cout << "Name: " << name << endl;
        cout << "Subject: " << subject << endl;   
        cout << "Department: " << department << endl;
    }
};

int main() {
    // Creating an object using the parameterized constructor
    Teacher t1("Alice", "Mathematics", "Science");
    t1.display();

    // Creating another object using the copy constructor
    Teacher t2 = t1;
    t2.display();

    return 0;
}