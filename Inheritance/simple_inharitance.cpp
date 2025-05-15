# include <iostream> 

using namespace std;

class Person {
public:
    string name;
    int age;
};

class Student : public Person {
public:
    int roll_no;
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No.: " << roll_no << endl;
    }
};

int main() {
    Student s1;
    s1.name = "GK";
    s1.age = 20;
    s1.roll_no = 101;
    s1.display();
    return 0;
}