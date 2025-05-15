#include <iostream>
using namespace std;

// Base class
class Person {
public:
    string name;
    int age;

    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class 1
class Student : public Person {
public:
    int rollno;

    void printStudent() {
        getInfo();  // calling base class method
        cout << "Roll Number: " << rollno << endl;
    }
};

// Derived class 2
class Teacher : public Person {
public:
    string subject;

    void printTeacher() {
        getInfo();  // calling base class method
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    // Student Object
    Student s1;
    s1.name = "Girish Suthar";
    s1.age = 20;
    s1.rollno = 101;
    cout << "Student Details:" << endl;
    s1.printStudent();

    cout << "\n";

    // Teacher Object
    Teacher t1;
    t1.name = "Mr. Smith";
    t1.age = 40;
    t1.subject = "Mathematics";
    cout << "Teacher Details:" << endl;
    t1.printTeacher();

    return 0;
}
