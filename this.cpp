# include <iostream> 

using namespace std;

class Teacher {
public:
    string name;
    string subject;
    string department;  

    Teacher(string name, string department, string subject) {
        cout << "Data members initialized using this pointer" << endl;
        this -> name = name; 
        this -> department = department; 
        this -> subject = subject; 
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