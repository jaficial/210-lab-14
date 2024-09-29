// COMSC-210 
#include <iostream>
#include <iomanip>
using namespace std;

const int W15 = 15;

class Student {
private:
	// 3 "private member" variables
    double GPA;
    string name;
    int courseLoad;
public:
    // getters and setters
    double getGPA()              { return GPA; } // getter that returns whatever the value is
    void setGPA(double g)        { GPA = g; } // setter that receives a parameter and assigns it to "GPA"
    string getName()             { return name; }
    void setName(string n)       { name = n; } // FUNCTION
    int getCourseLoad()          { return courseLoad; } // inline getter
    void setCourseLoad(int c)    { courseLoad = c; } // inline setter

    // other methods
    // common for classes to have a "print" method such as below to print out data
    void print() {
        cout << setw(W15) << "GPA: " << GPA << endl;
        cout << setw(W15) << "Name: " << name << endl;
        cout << setw(W15) << "Course load: " << courseLoad << endl;
    }
};

void print(Student);

int main() {
    cout << fixed << setprecision(2);
    // student 1
    Student craig; // same format as creating a struct
    craig.setGPA(2.33);
    craig.setName("Craig");
    craig.setCourseLoad(15);
    craig.print(); // call to the print method
    print(craig);

    // student 2
    Student janice;
    janice.setGPA(3.82);
    janice.setName("Janice");
    janice.setCourseLoad(14);
    janice.print();
    print(janice);
    
    return 0;
}

void print(Student s) {
    cout << s.getName() << " (" << s.getGPA() << ", " // have to go through the "getter" to get info, not through the setter since it is a public member, not a private member	
         << s.getCourseLoad() << " credits)\n\n";
}
