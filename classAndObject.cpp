# include <iostream> 

using namespace std;

class Teacher {
public:
    // Properties / Attributes
    string name;
    string subject;
    string department;

    // Setters and Getters for Salary
    void setSalary(double s) {
        salary = s; // Set the salary using a public method
    }

    double getSalary() const {
        return salary; // Get the salary using a public method
    }

private:
    double salary; // Private member, 
};

int main() {
    Teacher t1;
    Teacher t2;
    t1.name = "John Doe";
    t1.department = "CSE";
    t1.subject = "C++ Programming";
    t1.setSalary(50000); 

    t2.name = "John Smith";
    t2.department = "CSE";
    t2.subject = "Python Programming";
    t2.setSalary(60000); 

    cout << "Name: " << t1.name << endl;
    cout << "Department: " << t1.department << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Salary: " << t1.getSalary() << endl; 
    cout << endl; 
    
    cout << "Name: " << t2.name << endl;
    cout << "Department: " << t2.department << endl;
    cout << "Subject: " << t2.subject << endl;
    cout << "Salary: " << t2.getSalary() << endl; 
    return 0;
}