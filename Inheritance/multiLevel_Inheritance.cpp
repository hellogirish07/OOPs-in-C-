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
};

class Graduate : public Student {
public:
    string degree;
    
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No.: " << roll_no << endl;
        cout << "Degree: " << degree << endl;
    }
};

int main() {
    Graduate g1;
    g1.name = "GK";
    g1.age = 20;
    g1.roll_no = 101;
    g1.degree = "B.Sc.";
    g1.display();
    return 0;
}