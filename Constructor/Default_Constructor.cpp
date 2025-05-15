# include <iostream> 

using namespace std;

class Teacher {
public:
    string name;
    string subject;
    string department;  

    // Default constructor
    Teacher() {
        cout << "Default constructor called" << endl;
    }
};

int main() {
    Teacher t1; // Default constructor called
    // Teacher t2("Girish Suthar", "CSE", "C++ Programming"); // Parameterized constructor called
    // t2.getInfo(); 

    // Teacher t3(t2);
    // t3.getInfo(); // Copy constructor called
    return 0;
}
