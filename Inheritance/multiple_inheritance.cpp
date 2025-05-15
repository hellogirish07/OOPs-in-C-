# include <iostream> 

using namespace std;

class Student {
public:
    string name;
    int roll_no;
};

class Teacher {
public:
    string teacherName;
    string subject;
    double salary;
};

class School : public Student, public Teacher {
public:
    void display() {
        cout << "Student Name: " << name << endl;
        cout << "Roll No.: " << roll_no << endl;
        cout << "Teacher Name: " << Teacher::teacherName << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    School s1;
    s1.name = "GK";
    s1.roll_no = 101;
    s1.teacherName = "Mr. Smith";
    s1.subject = "CSE";
    s1.salary = 50000.0;
    s1.display();
    return 0;
}